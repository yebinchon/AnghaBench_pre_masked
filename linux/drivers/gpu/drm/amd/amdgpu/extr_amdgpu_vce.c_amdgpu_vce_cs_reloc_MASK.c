
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_cs_parser {int dummy; } ;
struct amdgpu_bo_va_mapping {int last; int start; } ;
struct amdgpu_bo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_cs_parser*,int,struct amdgpu_bo**,struct amdgpu_bo_va_mapping**) ;
 scalar_t__ FUNC_3 (struct amdgpu_cs_parser*,int,int) ;
 int FUNC_4 (struct amdgpu_cs_parser*,int,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_cs_parser *VAR_2, uint32_t VAR_3,
          int VAR_4, int VAR_5, unsigned VAR_6, uint32_t VAR_7)
{
 struct amdgpu_bo_va_mapping *VAR_8;
 struct amdgpu_bo *VAR_9;
 uint64_t VAR_10;
 int VAR_11;

 if (VAR_7 == 0xffffffff)
  VAR_7 = 0;

 VAR_10 = ((uint64_t)FUNC_3(VAR_2, VAR_3, VAR_4)) |
        ((uint64_t)FUNC_3(VAR_2, VAR_3, VAR_5)) << 32;
 VAR_10 += ((uint64_t)VAR_6) * ((uint64_t)VAR_7);

 VAR_11 = FUNC_2(VAR_2, VAR_10, &VAR_9, &VAR_8);
 if (VAR_11) {
  FUNC_0("Can't find BO for addr 0x%010Lx %d %d %d %d\n",
     VAR_10, VAR_4, VAR_5, VAR_6, VAR_7);
  return VAR_11;
 }

 if ((VAR_10 + (uint64_t)VAR_6) >
     (VAR_8->last + 1) * VAR_0) {
  FUNC_0("BO to small for addr 0x%010Lx %d %d\n",
     VAR_10, VAR_4, VAR_5);
  return -VAR_1;
 }

 VAR_10 -= VAR_8->start * VAR_0;
 VAR_10 += FUNC_1(VAR_9);
 VAR_10 -= ((uint64_t)VAR_6) * ((uint64_t)VAR_7);

 FUNC_4(VAR_2, VAR_3, VAR_4, FUNC_5(VAR_10));
 FUNC_4(VAR_2, VAR_3, VAR_5, FUNC_6(VAR_10));

 return 0;
}

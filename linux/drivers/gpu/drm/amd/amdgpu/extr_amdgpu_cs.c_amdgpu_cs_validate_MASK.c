
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_cs_parser {int dummy; } ;
struct amdgpu_bo {struct amdgpu_bo* shadow; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_cs_parser*,struct amdgpu_bo*) ;
 scalar_t__ FUNC_1 (struct amdgpu_cs_parser*,struct amdgpu_bo*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct amdgpu_bo *VAR_2)
{
 struct amdgpu_cs_parser *VAR_3 = VAR_1;
 int VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
 } while (VAR_4 == -VAR_0 && FUNC_1(VAR_3, VAR_2));
 if (VAR_4)
  return VAR_4;

 if (VAR_2->shadow)
  VAR_4 = FUNC_0(VAR_3, VAR_2->shadow);

 return VAR_4;
}

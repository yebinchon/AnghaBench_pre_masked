
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct amd64_pvt {int fam; int model; int stepping; int F2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static u64 FUNC_1(struct amd64_pvt *VAR_1, u64 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_1->fam == 0x10) {

  if (VAR_1->model < 4 || (VAR_1->model < 0xa && VAR_1->stepping < 3))
   return VAR_2;
 }

 FUNC_0(VAR_1->F2, VAR_0, &VAR_3);

 if (!(VAR_3 & 0x1))
  return VAR_2;

 VAR_4 = (VAR_3 >> 3) & 0x7f;
 VAR_5 = (VAR_3 >> 11) & 0x7f;
 VAR_6 = (VAR_3 >> 20) & 0x7f;
 VAR_7 = VAR_2 >> 27;

 if (!(VAR_2 >> 34) &&
     (((VAR_7 >= VAR_4) &&
      (VAR_7 <= VAR_5)) ||
      (VAR_7 < VAR_6)))
  return VAR_2 ^ (u64)VAR_4 << 27;

 return VAR_2;
}

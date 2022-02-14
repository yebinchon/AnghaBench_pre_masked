
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct amd64_pvt {int fam; int model; int F2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (struct amd64_pvt*) ;
 int FUNC_2 (struct amd64_pvt*,int) ;

__attribute__((used)) static inline int FUNC_3(struct amd64_pvt *VAR_1, u8 VAR_2,
      int VAR_3, u32 *VAR_4)
{
 switch (VAR_1->fam) {
 case 0xf:
  if (VAR_2 || VAR_3 >= 0x100)
   return -VAR_0;
  break;

 case 0x10:
  if (VAR_2) {





   if (FUNC_1(VAR_1))
    return 0;

   VAR_3 += 0x100;
  }
  break;

 case 0x15:




  VAR_2 = (VAR_2 && VAR_1->model == 0x30) ? 3 : VAR_2;
  FUNC_2(VAR_1, VAR_2);
  break;

 case 0x16:
  if (VAR_2)
   return -VAR_0;
  break;

 default:
  break;
 }
 return FUNC_0(VAR_1->F2, VAR_3, VAR_4);
}

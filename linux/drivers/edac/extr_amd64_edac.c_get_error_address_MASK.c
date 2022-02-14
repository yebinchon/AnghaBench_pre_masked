
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct mce {int addr; int extcpu; } ;
struct amd64_pvt {int fam; int F1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;
 struct mem_ctl_info* FUNC_4 (int ) ;

__attribute__((used)) static u64 FUNC_5(struct amd64_pvt *VAR_2, struct mce *VAR_3)
{
 u16 VAR_4 = FUNC_3(VAR_3->extcpu);
 struct mem_ctl_info *VAR_5;
 u8 VAR_6 = 1;
 u8 VAR_7 = 47;
 u64 VAR_8;

 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  return 0;

 VAR_2 = VAR_5->pvt_info;

 if (VAR_2->fam == 0xf) {
  VAR_6 = 3;
  VAR_7 = 39;
 }

 VAR_8 = VAR_3->addr & FUNC_0(VAR_7, VAR_6);




 if (VAR_2->fam == 0x15) {
  u64 VAR_9, VAR_10;
  u32 VAR_11;
  u8 VAR_12;

  if ((VAR_8 & FUNC_0(47, 24)) >> 24 != 0x00fdf7)
   return VAR_8;


  FUNC_2(VAR_2->F1, VAR_1, &VAR_11);
  VAR_12 = VAR_11 >> 21 & 0x7;


  VAR_9 = (VAR_11 & FUNC_0(20, 0)) << 3;


  VAR_9 |= VAR_12 ^ 0x7;


  VAR_9 <<= 24;

  if (!VAR_12)
   return VAR_9 | (VAR_8 & FUNC_0(23, 0));

  FUNC_2(VAR_2->F1, VAR_0, &VAR_11);


  VAR_10 = (VAR_8 & FUNC_0(23, 12)) << FUNC_1(VAR_12 + 1);


  VAR_10 |= (VAR_11 & FUNC_0(23, 21)) >> 9;


  VAR_10 |= VAR_8 & FUNC_0(11, 0);

  return VAR_9 | VAR_10;
 }

 return VAR_8;
}

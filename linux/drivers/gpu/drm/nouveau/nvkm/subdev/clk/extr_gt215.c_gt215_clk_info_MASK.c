
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_clk {int dummy; } ;
struct gt215_clk_info {int clk; } ;
struct gt215_clk {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 struct gt215_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct gt215_clk*,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_clk *VAR_1, int VAR_2, u32 VAR_3,
        struct gt215_clk_info *VAR_4)
{
 struct gt215_clk *VAR_5 = FUNC_0(VAR_1);
 u32 VAR_6, VAR_7, VAR_8;
 s32 VAR_9;

 VAR_4->clk = 0;

 switch (VAR_3) {
 case 27000:
  VAR_4->clk = 0x00000100;
  return VAR_3;
 case 100000:
  VAR_4->clk = 0x00002100;
  return VAR_3;
 case 108000:
  VAR_4->clk = 0x00002140;
  return VAR_3;
 default:
  VAR_7 = FUNC_2(VAR_5, VAR_2);
  VAR_8 = FUNC_1((VAR_7 * 2) / VAR_3, (u32)65);
  VAR_6 = (VAR_7 * 2) / VAR_8;
  VAR_9 = ((VAR_3 + 3000) - VAR_6);



  if (VAR_9 < 0) {
   VAR_8++;
   VAR_6 = (VAR_7 * 2) / VAR_8;
  }





  if (VAR_8 > 4) {
   VAR_4->clk = (((VAR_8 - 2) << 16) | 0x00003100);
   return VAR_6;
  }

  break;
 }

 return -VAR_0;
}

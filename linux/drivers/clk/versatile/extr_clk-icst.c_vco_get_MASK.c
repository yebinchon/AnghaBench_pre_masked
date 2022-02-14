
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct icst_vco {int v; int r; int s; } ;
struct clk_icst {scalar_t__ ctype; int vcoreg_off; int map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct clk_icst *VAR_8, struct icst_vco *VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_8->map, VAR_8->vcoreg_off, &VAR_10);
 if (VAR_11)
  return VAR_11;
 if (VAR_8->ctype == VAR_0) {
  VAR_9->v = VAR_10 & VAR_5;
  VAR_9->r = 22;
  VAR_9->s = 1;
  return 0;
 }
 if (VAR_8->ctype == VAR_2) {
  VAR_9->v = VAR_10 & VAR_7;
  VAR_9->r = 46;
  VAR_9->s = 3;
  return 0;
 }
 if (VAR_8->ctype == VAR_1) {
  bool VAR_12 = !!(VAR_10 & VAR_6);

  VAR_9->v = VAR_12 ? 17 : 14;
  VAR_9->r = VAR_12 ? 22 : 14;
  VAR_9->s = 1;
  return 0;
 }
 if (VAR_8->ctype == VAR_3) {
  VAR_9->v = VAR_10 & 0xFF;
  VAR_9->r = 22;
  VAR_9->s = (VAR_10 >> 8) & 7;
  return 0;
 }

 if (VAR_8->ctype == VAR_4) {
  VAR_9->v = (VAR_10 >> 12) & 0xFF;
  VAR_9->r = 22;
  VAR_9->s = (VAR_10 >> 20) & 7;
  return 0;
 }

 VAR_9->v = VAR_10 & 0x1ff;
 VAR_9->r = (VAR_10 >> 9) & 0x7f;
 VAR_9->s = (VAR_10 >> 16) & 03;
 return 0;
}

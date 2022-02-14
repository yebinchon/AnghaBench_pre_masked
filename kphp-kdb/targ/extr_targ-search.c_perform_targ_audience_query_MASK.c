
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int,char*,int,int,int,int,int) ;

int FUNC_4 (int VAR_14, int VAR_15, int VAR_16, int VAR_17) {
  FUNC_3 (1, "perform targ_audience query(position=%d, cpv=%d, mask=%d:%d) for %d auxiliary queries\n", VAR_14, VAR_15, VAR_16, VAR_17, VAR_0);
  if (VAR_14 <= 0 || VAR_14 > 100 || VAR_1 < 0 || VAR_1 > 1000) {
    return -1;
  }
  if (!VAR_1) {
    VAR_1 = 50;
  }
  FUNC_1 (VAR_3, 0, (VAR_0 + 1) * 12);
  VAR_5 = (-1 << 31);
  VAR_8 = VAR_9;
  VAR_6 = VAR_7;
  VAR_12 = VAR_14;
  VAR_11 = VAR_15;
  VAR_10 = VAR_16;
  VAR_13 = VAR_17;
  int VAR_18 = FUNC_2 (0);
  VAR_4 = 3 * VAR_0 + 2;
  VAR_5 = 0;
  FUNC_0 (VAR_2, VAR_3 + 1, VAR_4 * 4);
  return VAR_18;
}

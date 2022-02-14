
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;

int FUNC_2 (int VAR_14, int VAR_15, int VAR_16, int VAR_17) {
  int VAR_18;
  if (VAR_14 <= 0 || VAR_14 > 100) { return -1; }
  VAR_4 = VAR_14;

  if (VAR_1 <= 0) { VAR_1 = 1000; }
  if (VAR_1 > 10000) { VAR_1 = 10000; }
  FUNC_0 (VAR_2, 0, VAR_1 * sizeof(int));

  VAR_11 = (VAR_15 & 8) ? VAR_12 : VAR_13;
  VAR_8 = 1;
  VAR_9 = 0;
  VAR_7 = 0;
  VAR_5 = (VAR_16 & 0xff) << VAR_0;
  VAR_10 = (VAR_17 & 0xff) << VAR_0;
  VAR_6 = -1LL;

  VAR_18 = FUNC_1 (0);

  VAR_8 = 0;
  VAR_9 = 0;
  VAR_5 = (254 << VAR_0);
  VAR_10 = 0;

  VAR_4 = 0;
  if (VAR_18 > 0) {
    VAR_3 = VAR_1;
    while (VAR_3 && !VAR_2[VAR_3-1]) { VAR_3--; }
  }
  return VAR_18;
}

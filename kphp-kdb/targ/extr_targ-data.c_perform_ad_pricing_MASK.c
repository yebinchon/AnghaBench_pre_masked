
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {long users; int * user_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct advert* FUNC_0 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 long FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int) ;

int FUNC_4 (int VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18) {
  VAR_3 = 0;
  if (VAR_13 <= 0 || VAR_14 <= 0 || VAR_14 > 100 || VAR_18 <= 0 || VAR_18 > 1000) {
    return -1;
  }
  struct advert *VAR_19 = FUNC_0 (VAR_13, 0);
  if (!VAR_19 || !VAR_19->user_list) {
    return -1;
  }

  if (VAR_1 <= 0) {
    VAR_1 = 1000;
  }
  if (VAR_1 > 10000) {
    VAR_1 = 10000;
  }
  FUNC_2 (VAR_2, 0, VAR_1 * sizeof(int));

  VAR_10 = (VAR_15 & 8) ? VAR_11 : VAR_12;
  VAR_7 = 1;
  VAR_8 = 0;
  VAR_6 = VAR_13;
  VAR_4 = (VAR_16 & 0xff) << VAR_0;
  VAR_9 = (VAR_17 & 0xff) << VAR_0;
  VAR_5 = -1LL;

  long VAR_20, VAR_21 = VAR_19->users;
  if (VAR_18 > VAR_21) {
    VAR_18 = VAR_21;
  }
  long VAR_22 = VAR_18;
  for (VAR_20 = 0; VAR_20 < VAR_19->users; VAR_20++) {
    if (FUNC_1() % VAR_21 < VAR_22) {
      VAR_22--;
      int VAR_23 = FUNC_3 (VAR_19->user_list[VAR_20], VAR_14);
      if (VAR_23 >= VAR_1) {
 VAR_23 = VAR_1 - 1;
      } else if (VAR_23 < 0) {
 VAR_23 = 0;
      }
      VAR_2[VAR_23]++;
    }
    VAR_21--;
  }
  VAR_7 = 0;
  VAR_8 = 0;
  VAR_6 = 0;
  VAR_4 = (254 << VAR_0);
  VAR_9 = 0;

  VAR_3 = VAR_1;
  while (VAR_3 && !VAR_2[VAR_3-1]) { VAR_3--; }
  return VAR_18;
}

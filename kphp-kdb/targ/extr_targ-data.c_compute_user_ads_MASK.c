
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_t ;
struct TYPE_4__ {long ad_id; int views; double expected_gain; } ;
struct TYPE_3__ {int price; } ;


 int VAR_0 ;
 double VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long long VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (long) ;
 int * FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_5 (int VAR_16, int VAR_17, int VAR_18, int VAR_19, int VAR_20, long long VAR_21) {
  user_t *VAR_22 = FUNC_3 (VAR_16);
  int VAR_23;



  if (!VAR_22 || VAR_17 <= 0) { return -1; }

  if (VAR_17 > (VAR_4 >> 2)) {
    VAR_17 = (VAR_4 >> 2);
  }

  if (VAR_18 & 16) {
    VAR_19 |= 1;
    VAR_20 |= 1;
  }

  VAR_13 = (VAR_18 & 8) ? VAR_14 : VAR_15;
  VAR_10 = 1;
  VAR_11 = 1;
  VAR_9 = 0;
  VAR_7 = (VAR_19 & 0xff) << VAR_0;
  VAR_12 = (VAR_20 & 0xff) << VAR_0;
  VAR_8 = VAR_21;

  FUNC_1 (VAR_22, VAR_17);

  VAR_10 = 0;
  VAR_11 = 0;
  VAR_7 = (254 << VAR_0);
  VAR_12 = 0;
  VAR_8 = -1LL;

  VAR_23 = VAR_3;
  FUNC_0 (VAR_23 >= 0 && VAR_23 <= VAR_17);

  if (VAR_18 & 7) {
    int *VAR_24 = VAR_5 + VAR_3 * (1 + (VAR_18 & 1) + ((VAR_18 >> 1) & 1) + ((VAR_18 >> 2) & 1));
    while (VAR_3 > 0) {
      long VAR_25 = VAR_2[1].ad_id;
      if (VAR_18 & 4) {
 *--VAR_24 = VAR_2[1].views;
      }
      if (VAR_18 & 2) {
 *--VAR_24 = FUNC_2 (VAR_25)->price;
      }
      if (VAR_18 & 1) {
 double VAR_26 = VAR_2[1].expected_gain * VAR_1;
 *--VAR_24 = (int) (VAR_26 < 0 ? 0 : (VAR_26 > 2e9 ? 2e9 : VAR_26 + 0.5));
      }
      *--VAR_24 = VAR_25;
      FUNC_4 ();
    }
    FUNC_0 (VAR_24 == VAR_5);
  } else {
    while (VAR_3 > 0) {
      VAR_5[VAR_3-1] = VAR_2[1].ad_id;
      FUNC_4 ();
    }
  }

  return VAR_6 = VAR_23;
}

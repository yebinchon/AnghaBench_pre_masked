
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; int In; } ;
typedef int pli ;
typedef int ll ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ) ;


 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int,int *,int,char*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (int *,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (int ,int *,int) ;
 scalar_t__ VAR_10 ;

int FUNC_11 (struct connection *VAR_11, int VAR_12, int VAR_13) {
  if (VAR_10 > 0) {
    FUNC_5 (VAR_9, "rpcs_execute: fd=%d, op=%d, len=%d\n", VAR_11->fd, VAR_12, VAR_13);
  }
  int *VAR_14 = (int *)VAR_2;

  ll VAR_15;
  int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
  char *VAR_25;

  FUNC_2 (VAR_3);
  VAR_8 += VAR_13;

  switch (VAR_12 & 0xffff0000) {
  case 128:
    FUNC_2 (VAR_6);
    VAR_7 += VAR_13;
    FUNC_4 (VAR_13 < VAR_0);
    FUNC_4 (FUNC_6 (&VAR_11->In, VAR_14, VAR_13) == VAR_13);

    VAR_22 = (VAR_12 >> 1) & 1,
    VAR_23 = VAR_12 & 1;
    VAR_15 = *(ll *)&VAR_14[3];
    VAR_21 = VAR_13 / sizeof (int) - 4 - 2;
    FUNC_4 (VAR_21 % 3 == 0);
    VAR_21 /= 3;
    pli *VAR_26 = (pli *)&VAR_14[5];

    if (VAR_23) {

      if (VAR_22) {

        VAR_24 = FUNC_8 (VAR_15, VAR_26, VAR_21);
      } else {
        VAR_24 = FUNC_7 (VAR_15, VAR_26, VAR_21);
      }
    } else {
      if (VAR_22) {

        VAR_24 = FUNC_10 (VAR_15, VAR_26, VAR_21);
      } else {
        VAR_24 = FUNC_9 (VAR_15, VAR_26, VAR_21);
      }
    }

    return 0;
    break;

  case 129:
    FUNC_2 (VAR_4);
    VAR_5 += VAR_13;
    FUNC_4 (VAR_13 < VAR_0);
    FUNC_4 (FUNC_6 (&VAR_11->In, VAR_14, VAR_13) == VAR_13);

    VAR_14 += 3;

    FUNC_1 (VAR_14, VAR_15);
    FUNC_0 (VAR_14, VAR_16);
    FUNC_0 (VAR_14, VAR_17);
    FUNC_0 (VAR_14, VAR_18);
    FUNC_0 (VAR_14, VAR_21);
    FUNC_0 (VAR_14, VAR_19);
    VAR_20 = (VAR_19 + 1 + 3) / 4;
    pli *VAR_27 = (pli *)VAR_14;
    VAR_14 += VAR_21 * 3;
    VAR_25 = (char *)VAR_14;

    int VAR_28 = VAR_12 & 1;


    FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, VAR_27, VAR_21, VAR_25, VAR_28);
    return 0;
    break;
  }

  return VAR_1;
}

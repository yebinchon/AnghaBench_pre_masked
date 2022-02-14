
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5 (int VAR_12, int VAR_13) {
  int VAR_14;
  int VAR_15;

  if ((VAR_14 = FUNC_4 (VAR_12 & VAR_7 ? VAR_1 : VAR_0, VAR_12 & VAR_9 ? VAR_10 : VAR_11, 0)) == -1) {
    FUNC_2 ("socket()");
    return -1;
  }

  if (VAR_12 & VAR_7) {
    VAR_15 = (VAR_12 & VAR_8) != 0;
    if (FUNC_3 (VAR_14, VAR_4, VAR_5, &VAR_15, 4) < 0) {
      FUNC_2 ("setting IPV6_V6ONLY");
      FUNC_0 (VAR_14);
      return -1;
    }
  }

  if (!VAR_13) {
    return VAR_14;
  }

  if ((VAR_15 = FUNC_1 (VAR_14, VAR_2, 0)) < 0 || FUNC_1 (VAR_14, VAR_3, VAR_15 | VAR_6) < 0) {
    FUNC_2 ("setting O_NONBLOCK");
    FUNC_0 (VAR_14);
    return -1;
  }
  return VAR_14;
}

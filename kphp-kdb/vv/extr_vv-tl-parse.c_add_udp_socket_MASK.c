
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,int,int *,int *,int) ;
 scalar_t__ FUNC_4 (int,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_5 (int VAR_7, int VAR_8) {
  if (!VAR_6) {
    VAR_6 = FUNC_4 (VAR_7, VAR_2, VAR_0, VAR_8 + 1);
    if (VAR_6 < 0) {
      FUNC_2 (VAR_3, "cannot open udp port: %m\n");
      FUNC_1 (1);
    }
  }
  FUNC_0 ((VAR_1 = FUNC_3 (VAR_6, VAR_7, &VAR_4, &VAR_5, 1 + VAR_8)));
}

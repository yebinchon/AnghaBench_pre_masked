
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,int,double) ;
 double FUNC_2 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void) {
  int64_t VAR_7;

  FUNC_4(VAR_1);
  VAR_7 = FUNC_3(VAR_1) - VAR_4;

  FUNC_1(VAR_5, "%s_pump%d_server: %.1f gbit/s\n",
          VAR_6 == VAR_0 ? "tcp" : "pipe",
          VAR_2,
          FUNC_2(VAR_3, VAR_7));
  FUNC_0(VAR_5);
}

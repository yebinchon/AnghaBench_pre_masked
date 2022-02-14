
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtype; } ;
typedef TYPE_1__ token ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

char *FUNC_2 (token *VAR_6) {
  char *VAR_7 = VAR_0;

  switch (VAR_6->dtype) {
    FUNC_0("%d", VAR_3);
    FUNC_0("%lf", VAR_2);
    FUNC_0("%lld", VAR_4);
    FUNC_0("%s", VAR_5);
    FUNC_0("%s", VAR_1);
    default:
      FUNC_1 (0);
  }

  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

void
FUNC_5(void)
{
  sigset_t VAR_4;

  FUNC_1(&VAR_4);
  FUNC_0(&VAR_4, VAR_1);

  if (FUNC_2(VAR_2, &VAR_4, ((void*)0)) < 0) {
    FUNC_4(VAR_0, "sigunlock failed: %s", FUNC_3(VAR_3));
  }
}

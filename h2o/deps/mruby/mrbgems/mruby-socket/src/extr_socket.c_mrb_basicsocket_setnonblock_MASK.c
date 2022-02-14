
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (int *,char*,scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_5, mrb_value VAR_6)
{
  int VAR_7, VAR_8;
  mrb_bool VAR_9;




  FUNC_2(VAR_5, "b", &VAR_9);
  VAR_7 = FUNC_5(VAR_5, VAR_6);





  VAR_8 = FUNC_0(VAR_7, VAR_1, 0);
  if (VAR_8 == 1)
    FUNC_4(VAR_5, "fcntl");
  if (VAR_9)
    VAR_8 |= VAR_4;
  else
    VAR_8 &= ~VAR_4;
  if (FUNC_0(VAR_7, VAR_2, VAR_8) == -1)
    FUNC_4(VAR_5, "fcntl");

  return FUNC_3();
}

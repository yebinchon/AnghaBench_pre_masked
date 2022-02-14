
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{
  FUNC_5(VAR_1, VAR_0, "getpeereid is not available on this system");
  return FUNC_4();

}

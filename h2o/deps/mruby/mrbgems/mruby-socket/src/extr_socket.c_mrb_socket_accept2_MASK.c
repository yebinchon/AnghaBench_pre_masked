
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3;
  int VAR_4;
  mrb_int VAR_5;
  socklen_t VAR_6;

  FUNC_5(VAR_0, "i", &VAR_5);
  VAR_6 = sizeof(struct sockaddr_storage);
  VAR_3 = FUNC_6(VAR_0, VAR_6);
  VAR_4 = (int)FUNC_1(VAR_5, (struct sockaddr *)FUNC_0(VAR_3), &VAR_6);
  if (VAR_4 == -1) {
    FUNC_8(VAR_0, "accept");
  }

  FUNC_7(VAR_0, VAR_3, VAR_6);
  VAR_2 = FUNC_2(VAR_0, 2);
  FUNC_3(VAR_0, VAR_2, FUNC_4(VAR_4));
  FUNC_3(VAR_0, VAR_2, VAR_3);
  return VAR_2;
}

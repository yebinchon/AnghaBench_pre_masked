
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int ss ;
typedef int socklen_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int fsize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int,int ,int ,int,struct sockaddr*,int*) ;
 int FUNC_8 (int *,struct sockaddr*,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct sockaddr_storage VAR_2;
  socklen_t VAR_3;
  mrb_value VAR_4, VAR_5, VAR_6;
  mrb_int VAR_7, VAR_8;
  ssize_t VAR_9;
  int VAR_10;

  VAR_10 = FUNC_9(VAR_0, VAR_1);
  VAR_7 = 0;
  FUNC_3(VAR_0, "i|i", &VAR_8, &VAR_7);
  VAR_5 = FUNC_4(VAR_0, VAR_8);
  VAR_3 = sizeof(VAR_2);
  VAR_9 = FUNC_7(VAR_10, FUNC_0(VAR_5), (fsize_t)VAR_8, (int)VAR_7,
          (struct sockaddr *)&VAR_2, &VAR_3);
  if (VAR_9 == -1) {
    FUNC_6(VAR_0, "recvfrom");
  }
  FUNC_5(VAR_0, VAR_5, (mrb_int)VAR_9);
  VAR_4 = FUNC_8(VAR_0, (struct sockaddr *)&VAR_2, VAR_3);
  VAR_6 = FUNC_1(VAR_0, 2);
  FUNC_2(VAR_0, VAR_6, VAR_5);
  FUNC_2(VAR_0, VAR_6, VAR_4);
  return VAR_6;
}

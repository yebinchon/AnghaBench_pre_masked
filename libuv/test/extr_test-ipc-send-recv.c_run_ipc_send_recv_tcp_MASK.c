
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int tcp; } ;
struct TYPE_4__ {int tcp; } ;
struct TYPE_6__ {TYPE_2__ send2; TYPE_1__ send; int expected_type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int ,struct sockaddr_in*) ;
 int FUNC_5 (int *,struct sockaddr const*,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(int VAR_3) {
  struct sockaddr_in VAR_4;
  int VAR_5;

  FUNC_0(0 == FUNC_4("127.0.0.1", VAR_0, &VAR_4));

  VAR_2.expected_type = VAR_1;

  VAR_5 = FUNC_6(FUNC_3(), &VAR_2.send.tcp);
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_6(FUNC_3(), &VAR_2.send2.tcp);
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_5(&VAR_2.send.tcp, (const struct sockaddr*) &VAR_4, 0);
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_5(&VAR_2.send2.tcp, (const struct sockaddr*) &VAR_4, 0);
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_2(VAR_3);
  FUNC_0(VAR_5 == 0);

  FUNC_1();
  return 0;
}

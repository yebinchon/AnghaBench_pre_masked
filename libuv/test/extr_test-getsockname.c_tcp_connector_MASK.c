
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int sin_port; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_5__ {int * data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_2 (char*,int ,struct sockaddr_in*) ;
 int FUNC_3 (int *,TYPE_1__*,struct sockaddr const*,int ) ;
 int FUNC_4 (TYPE_1__*,struct sockaddr*,int*) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(void) {
  struct sockaddr_in VAR_7;
  struct sockaddr VAR_8;
  int VAR_9, VAR_10;

  FUNC_0(0 == FUNC_2("127.0.0.1", VAR_5, &VAR_7));

  VAR_9 = FUNC_5(VAR_3, &VAR_6);
  VAR_6.data = &VAR_2;
  FUNC_0(!VAR_9);

  VAR_9 = FUNC_3(&VAR_2,
                     &VAR_6,
                     (const struct sockaddr*) &VAR_7,
                     VAR_4);
  FUNC_0(!VAR_9);


  VAR_10 = sizeof VAR_8;
  VAR_9 = FUNC_4(&VAR_6, &VAR_8, &VAR_10);
  FUNC_0(!VAR_9);
  FUNC_0(VAR_8.sa_family == VAR_0);
  VAR_1 = FUNC_1(((struct sockaddr_in*) &VAR_8)->sin_port);
  FUNC_0(VAR_1 > 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_3 (struct sockaddr_in*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct sockaddr_in VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_12(VAR_2, VAR_3, 0);
 if (VAR_8 < 0) {
  FUNC_9("# socket: %s\n", FUNC_13(VAR_7));
  VAR_10 = -1;
 }

 if (!VAR_10) {
  FUNC_3(&VAR_9, sizeof(VAR_9));
  VAR_9.sin_len = sizeof(VAR_9);
  VAR_9.sin_family = VAR_0;
  VAR_9.sin_addr.s_addr = FUNC_6(VAR_1);
  VAR_9.sin_port = FUNC_7(VAR_4);

  if (FUNC_2(VAR_8, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0) {
   FUNC_9("# bind: %s\n", FUNC_13(VAR_7));
   VAR_10 = -1;
  }
 }

 if (!VAR_10 && FUNC_8(VAR_8, -1) < 0) {
  FUNC_9("# listen: %s\n", FUNC_13(VAR_7));
  VAR_10 = -1;
 }

 if (!VAR_10) {
  VAR_6 = FUNC_1(VAR_8, ((void*)0), ((void*)0));
  FUNC_11(VAR_5);
  if (FUNC_10() != 0)
   VAR_10 = -1;
 }

 FUNC_4();
 if (VAR_6 > 0)
  FUNC_5(VAR_6);
 if (VAR_8 > 0)
  FUNC_5(VAR_8);

 FUNC_0(VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct sigevent {int dummy; } ;
struct aio_context {int dummy; } ;
typedef int completion ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct aio_context*,int,int,int ) ;
 int FUNC_4 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_5 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct termios*) ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int*,int*,int *,int *,int *) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,struct termios*) ;
 scalar_t__ FUNC_12 (int,int ,struct termios*) ;

__attribute__((used)) static void
FUNC_13(completion VAR_3, struct sigevent *VAR_4)
{
 struct aio_context VAR_5;
 int VAR_6, VAR_7;
 struct termios VAR_8;
 int VAR_9;

 FUNC_0("aio");
 FUNC_2();

 FUNC_1(FUNC_9(&VAR_6, &VAR_7, ((void*)0), ((void*)0), ((void*)0)) == 0,
     "openpty failed: %s", FUNC_10(VAR_2));


 if (FUNC_11(VAR_7, &VAR_8) < 0) {
  VAR_9 = VAR_2;
  VAR_2 = VAR_9;
  FUNC_6("tcgetattr failed: %s", FUNC_10(VAR_2));
 }
 FUNC_7(&VAR_8);
 if (FUNC_12(VAR_7, VAR_1, &VAR_8) < 0) {
  VAR_9 = VAR_2;
  VAR_2 = VAR_9;
  FUNC_6("tcsetattr failed: %s", FUNC_10(VAR_2));
 }
 FUNC_3(&VAR_5, VAR_6, VAR_7, VAR_0);

 FUNC_5(&VAR_5, VAR_3, VAR_4);
 FUNC_4(&VAR_5, VAR_3, VAR_4);

 FUNC_8(VAR_6);
 FUNC_8(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int flags; int * socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (char*,struct sdp_sock*) ;
 int * FUNC_3 (struct sdp_sock*) ;
 int FUNC_4 (struct sdp_sock*) ;
 int FUNC_5 (struct sdp_sock*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5, int VAR_6)
{
 struct sdp_sock *VAR_7;

 VAR_7 = VAR_5;
 FUNC_0(VAR_7);




 if (VAR_7->flags & VAR_0)
  FUNC_2("sdp_shutdown_task: Racing with pcbfree for ssk %p",
      VAR_7);
 if (VAR_7->flags & VAR_1)
  FUNC_4(VAR_7);

 VAR_7->flags &= ~(VAR_4 | VAR_2);
 if ((VAR_7->flags & VAR_3) == 0 &&
     FUNC_3(VAR_7) == ((void*)0))
  return;
 if (VAR_7->socket == ((void*)0)) {
  FUNC_5(VAR_7);
  return;
 }
 FUNC_1(VAR_7);
}

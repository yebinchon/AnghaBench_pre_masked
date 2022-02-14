
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ evutil_socket_t ;
typedef int ev_intptr_t ;
typedef int ch ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,char*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 char VAR_4;
 evutil_socket_t VAR_5 = (evutil_socket_t)(ev_intptr_t)VAR_3;

 (void) FUNC_1(VAR_1, &VAR_4, sizeof(VAR_4), 0);
 if (VAR_5 >= 0) {
  if (FUNC_2(VAR_5, "e", 1, 0) < 0)
   FUNC_0("send");
 }
 VAR_0++;
}

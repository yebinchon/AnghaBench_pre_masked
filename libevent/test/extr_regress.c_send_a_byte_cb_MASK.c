
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 evutil_socket_t *VAR_3 = VAR_2;
 (void) VAR_0; (void) VAR_1;
 if (FUNC_1(*VAR_3, "A", 1) < 0)
  FUNC_0("write");
}

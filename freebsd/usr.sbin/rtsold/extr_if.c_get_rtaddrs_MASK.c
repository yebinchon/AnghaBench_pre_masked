
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int FUNC_0 (struct sockaddr*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(int VAR_1, struct sockaddr *VAR_2, struct sockaddr **VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1 & (1 << VAR_4)) {
   VAR_3[VAR_4] = VAR_2;
   FUNC_0(VAR_2);
  } else
   VAR_3[VAR_4] = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int FUNC_0 (struct sockaddr*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (struct sockaddr*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, int VAR_3)
{
 struct sockaddr *VAR_4;
 int VAR_5;

 if (VAR_3 == 0) {
  (void) FUNC_3('\n');
  return;
 }
 FUNC_2("\nsockaddrs: ");
 FUNC_1(VAR_1, VAR_3, VAR_0);
 FUNC_3('\n');
 for (VAR_5 = 1; VAR_5; VAR_5 <<= 1)
  if (VAR_5 & VAR_3) {
   VAR_4 = (struct sockaddr *)VAR_2;
   FUNC_2(" %s", FUNC_4(VAR_4));
   VAR_2 += FUNC_0(VAR_4);
  }
 FUNC_3('\n');
}

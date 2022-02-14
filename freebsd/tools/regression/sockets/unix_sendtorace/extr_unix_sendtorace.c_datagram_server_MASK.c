
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int c ;


 scalar_t__ FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_0)
{
 ssize_t VAR_1;
 char VAR_2;

 while (1) {
  VAR_1 = FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2), 0);
  if (VAR_1 < 0)
   FUNC_1("datagram_server: recv");
 }
}

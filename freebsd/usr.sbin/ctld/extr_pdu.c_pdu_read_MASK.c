
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,char*,size_t) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(int VAR_0, char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;

 while (VAR_2 > 0) {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (VAR_3 < 0) {
   if (FUNC_3())
    FUNC_1(1, "exiting due to timeout");
   FUNC_0(1, "read");
  } else if (VAR_3 == 0)
   FUNC_1(1, "read: connection lost");
  VAR_2 -= VAR_3;
  VAR_1 += VAR_3;
 }
}

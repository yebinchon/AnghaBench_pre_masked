
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct test_func {int (* func ) () ;int desc; } ;
struct TYPE_2__ {int sock_type; char* sock_type_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct test_func* VAR_4 ;
 struct test_func* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_7, u_int VAR_8)
{
 const struct test_func *VAR_9;
 u_int VAR_10, VAR_11, VAR_12;

 VAR_6.sock_type = VAR_7;
 if (VAR_7 == VAR_0) {
  VAR_6.sock_type_str = "SOCK_STREAM";
  VAR_9 = VAR_5;
  VAR_10 = VAR_2 - 1;
 } else {
  VAR_6.sock_type_str = "SOCK_DGRAM";
  VAR_9 = VAR_4;
  VAR_10 = VAR_1 - 1;
 }
 if (VAR_8 == 0) {
  VAR_8 = 1;
  VAR_11 = VAR_10;
 } else
  VAR_11 = VAR_8;

 FUNC_2("Running tests for %s sockets:\n", VAR_6.sock_type_str);
 VAR_12 = 0;
 for (VAR_10 = VAR_8, VAR_9 += VAR_8; VAR_10 <= VAR_11; ++VAR_9, ++VAR_10) {
  FUNC_2("  %u: %s\n", VAR_10, VAR_9->desc);
  switch (VAR_9->func()) {
  case -1:
   ++VAR_12;
   break;
  case -2:
   FUNC_1("some system error or timeout occurred");
   return (-1);
  }
 }

 if (VAR_12 != 0)
  VAR_3 = 1;

 if (VAR_8 != VAR_11) {
  if (VAR_12 == 0)
   FUNC_2("-- all tests passed!\n");
  else
   FUNC_2("-- %u test%s failed!\n",
       VAR_12, VAR_12 == 1 ? "" : "s");
 } else {
  if (VAR_12 == 0)
   FUNC_2("-- test passed!\n");
  else
   FUNC_2("-- test failed!\n");
 }

 return (0);
}

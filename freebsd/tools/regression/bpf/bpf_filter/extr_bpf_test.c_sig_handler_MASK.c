
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(int VAR_5)
{

 if (VAR_3 == 0) {
  if (VAR_4 > 1)
   FUNC_1("Received unexpected signal %d:\t", VAR_5);
  if (VAR_4 > 0)
   FUNC_1("FATAL\n");
  FUNC_0(VAR_1);
 }
 if (VAR_3 != VAR_5) {
  if (VAR_4 > 1)
   FUNC_1("Expected signal %d but got %d:\t",
       VAR_3, VAR_5);
  if (VAR_4 > 0)
   FUNC_1("FAILED\n");
  FUNC_0(VAR_0);
 }

 if (VAR_4 > 1)
  FUNC_1("Expected and got signal %d:\t", VAR_5);
 if (VAR_4 > 0)
  FUNC_1("PASSED\n");

 FUNC_0(VAR_2);
}

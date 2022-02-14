
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 double FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(int VAR_5, int VAR_6, off_t VAR_7, u_int VAR_8)
{
 off_t VAR_9;
 u_int VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;

 FUNC_7("Synchronous random writes:\n");
 for (VAR_10 = VAR_8; VAR_10 <= VAR_3; VAR_10 *= 2) {
  FUNC_7("\t%4.4g kbytes: ", (double)VAR_10 / 1024);
  VAR_13 = 0;
  FUNC_0();
  do {
   for (VAR_12 = 0; VAR_12 < 250; VAR_12++) {
    VAR_9 = FUNC_8() % (VAR_7 / VAR_10);
    FUNC_6(VAR_5, VAR_10, VAR_9 * VAR_10);
    if (VAR_14)
     continue;
    if (VAR_6)
     VAR_11 = FUNC_4(VAR_5);
    else
     VAR_11 = FUNC_5(VAR_5, VAR_0);
    if (VAR_11 < 0) {
     if (VAR_4 == VAR_1)
      VAR_14 = 1;
     else
      FUNC_3(VAR_2, "Flush error");
    }
   }
   VAR_13 += 250;
  } while (FUNC_2() < 1.0);
  FUNC_1(VAR_10, VAR_13);
 }
}

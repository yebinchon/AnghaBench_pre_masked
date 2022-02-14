
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 unsigned char FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned char) ;

__attribute__((used)) static int FUNC_7(unsigned char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_2 && VAR_4 == VAR_0)
  return -1;

 VAR_6 = FUNC_4();
 if (VAR_6)
  return VAR_6;

 FUNC_0("%02x -> i8042 (command)\n", VAR_4 & 0xff);
 FUNC_5(VAR_4 & 0xff);

 for (VAR_5 = 0; VAR_5 < ((VAR_4 >> 12) & 0xf); VAR_5++) {
  VAR_6 = FUNC_4();
  if (VAR_6) {
   FUNC_0("     -- i8042 (wait write timeout)\n");
   return VAR_6;
  }
  FUNC_0("%02x -> i8042 (parameter)\n", VAR_3[VAR_5]);
  FUNC_6(VAR_3[VAR_5]);
 }

 for (VAR_5 = 0; VAR_5 < ((VAR_4 >> 8) & 0xf); VAR_5++) {
  VAR_6 = FUNC_3();
  if (VAR_6) {
   FUNC_0("     -- i8042 (wait read timeout)\n");
   return VAR_6;
  }

  if (VAR_4 == VAR_0 &&
      !(FUNC_2() & VAR_1)) {
   FUNC_0("     -- i8042 (auxerr)\n");
   return -1;
  }

  VAR_3[VAR_5] = FUNC_1();
  FUNC_0("%02x <- i8042 (return)\n", VAR_3[VAR_5]);
 }

 return 0;
}

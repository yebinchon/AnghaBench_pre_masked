
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;
typedef int off_t ;
typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int,char const*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int,char*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_8(int VAR_3, off_t VAR_4, const char *VAR_5, time_t VAR_6)
{
 static int VAR_7 = 1;

 static off_t VAR_8, VAR_9;
 uint32_t VAR_10 = 0;

 off_t VAR_11 = 0, VAR_12;

 if (VAR_7) {

  if (VAR_2)
   FUNC_6("method  crc     date  time  ");

  if (VAR_1 == 0)
   FUNC_6("  compressed uncompressed  "
          "ratio uncompressed_name\n");
 }
 VAR_7 = 0;



 if (VAR_3 == -1) {
  VAR_11 = VAR_8;
  VAR_4 = VAR_9;
 } else

 {

  VAR_12 = FUNC_2(VAR_3, (off_t)(-8), VAR_0);
  if (VAR_12 != -1) {
   unsigned char VAR_13[8];
   uint32_t VAR_14;

   VAR_12 = FUNC_7(VAR_3, (char *)VAR_13, sizeof(VAR_13));
   if (VAR_12 == -1)
    FUNC_3("read of uncompressed size");
   else if (VAR_12 != sizeof(VAR_13))
    FUNC_4("read of uncompressed size");

   else {
    VAR_14 = FUNC_1(&VAR_13[4]);
    VAR_11 = (off_t)VAR_14;

    VAR_10 = FUNC_1(&VAR_13[0]);

   }
  }
 }


 if (VAR_2 && VAR_3 == -1)
  FUNC_6("                            ");
 else if (VAR_2) {
  char *VAR_15 = FUNC_0(&VAR_6);


  VAR_15 += 4;
  VAR_15[12] = 0;
  FUNC_6("%5s %08x %11s ", "defla" , VAR_10, VAR_15);
 }
 VAR_8 += VAR_11;
 VAR_9 += VAR_4;



 FUNC_5(VAR_4, VAR_11, VAR_5);
}

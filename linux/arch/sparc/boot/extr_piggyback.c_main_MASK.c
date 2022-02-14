
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned int st_size; } ;
typedef int off_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,unsigned int*,unsigned int*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int,unsigned int,int ) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (char*,unsigned int) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 unsigned int FUNC_15 (int,char*,unsigned int) ;

int FUNC_16(int VAR_5,char **VAR_6)
{
 static char VAR_7[] = { 0x01, 0x03, 0x01, 0x07 };
 char VAR_8[1024];
 unsigned int VAR_9, VAR_10, VAR_11;
 off_t VAR_12;
 struct stat VAR_13;
 int VAR_14, VAR_15;

 if (VAR_5 != 5)
  FUNC_14();
 if (FUNC_13(VAR_6[1], "64") == 0)
  VAR_3 = 1;
 if (FUNC_12 (VAR_6[4], &VAR_13) < 0)
  FUNC_2(VAR_6[4]);

 if (!FUNC_6(VAR_6[3], &VAR_10, &VAR_11)) {
  FUNC_4(VAR_4, "Could not determine start and end from %s\n",
          VAR_6[3]);
  FUNC_3(1);
 }
 if ((VAR_14 = FUNC_9(VAR_6[2], VAR_2)) < 0)
  FUNC_2(VAR_6[2]);
 if (FUNC_10(VAR_14, VAR_8, 512) != 512)
  FUNC_2(VAR_6[2]);
 if (FUNC_8(VAR_8, VAR_7, 4) != 0) {
  FUNC_4 (VAR_4, "Not a.out. Don't blame me.\n");
  FUNC_3(1);
 }
 VAR_12 = FUNC_5(VAR_14, VAR_6[2]);

 VAR_12 += 10;

 if (FUNC_7(VAR_14, VAR_12, 0) < 0)
  FUNC_2("lseek");
 FUNC_11(VAR_8, 0);
 FUNC_11(VAR_8 + 4, 0x01000000);
 FUNC_11(VAR_8 + 8, FUNC_0(VAR_11 + 32));
 FUNC_11(VAR_8 + 12, VAR_13.st_size);

 if (FUNC_15(VAR_14, VAR_8 + 2, 14) != 14)
  FUNC_2(VAR_6[2]);


 if (VAR_3)
 {
  if (FUNC_7(VAR_14, 4, 0) < 0)
   FUNC_2("lseek");

  FUNC_11(VAR_8, FUNC_0(VAR_11 + 32 + 8191) - (VAR_10 & ~0x3fffffUL) +
              VAR_13.st_size);

  FUNC_11(VAR_8 + 4, 0);

  FUNC_11(VAR_8 + 8, 0);
  if (FUNC_15(VAR_14, VAR_8, 12) != 12)
   FUNC_2(VAR_6[2]);
 }


 if (FUNC_7(VAR_14, VAR_0 - VAR_10 + FUNC_0(VAR_11 + 32), 0) < 0)
  FUNC_2("lseek");
 if ((VAR_15 = FUNC_9(VAR_6[4], VAR_1)) < 0)
  FUNC_2(VAR_6[4]);
 while ((VAR_9 = FUNC_10(VAR_15, VAR_8, 1024)) > 0)
  if (FUNC_15(VAR_14, VAR_8, VAR_9) != VAR_9)
   FUNC_2(VAR_6[2]);
 if (FUNC_1(VAR_14) < 0)
  FUNC_2("close");
 if (FUNC_1(VAR_15) < 0)
  FUNC_2("close");
 return 0;
}

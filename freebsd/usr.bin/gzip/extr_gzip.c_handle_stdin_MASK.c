
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; int st_mtime; int st_mode; } ;
typedef int ssize_t ;
typedef int off_t ;
typedef int header1 ;
typedef enum filetype { ____Placeholder_filetype } filetype ;
typedef int FILE ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int,int*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int ,int ,char*,int,int*,char*) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,size_t) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,size_t,int ,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *,int *,int,int) ;
 int FUNC_14 (int ,unsigned char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (int ,int ,char*,int,int*) ;
 int FUNC_16 (int ,int ,char*,int,int*) ;
 int FUNC_17 (int ,int ,char*,int,int*) ;
 int FUNC_18 (int ,int ,char*,int,int*) ;
 scalar_t__ VAR_7 ;
 int * FUNC_19 (int ) ;
 int FUNC_20 (int *,int ,char*,int,int*) ;

__attribute__((used)) static void
FUNC_21(void)
{
 struct stat VAR_8;
 unsigned char VAR_9[4];
 size_t VAR_10;
 off_t VAR_11, VAR_12;
 enum filetype VAR_13;
 ssize_t VAR_14;

 FILE *VAR_15;



 if (VAR_2 == 0 && VAR_4 == 0 && FUNC_8(VAR_0)) {
  FUNC_10("standard input is a terminal -- ignoring");
  goto out;
 }


 if (FUNC_4(VAR_0, &VAR_8) < 0) {
  FUNC_9("fstat");
  goto out;
 }
 if (FUNC_0(VAR_8.st_mode))
  VAR_10 = VAR_8.st_size;
 else
  VAR_10 = 0;
 FUNC_7("(stdin)", VAR_10);

 if (VAR_4) {
  FUNC_11(VAR_0, VAR_10, VAR_3, VAR_8.st_mtime);
  goto out;
 }

 VAR_14 = FUNC_14(VAR_0, VAR_9, sizeof VAR_9);
 if (VAR_14 == -1) {
  FUNC_9("can't read stdin");
  goto out;
 } else if (VAR_14 != sizeof(VAR_9)) {
  FUNC_10("(stdin): unexpected end of file");
  goto out;
 }

 VAR_13 = FUNC_3(VAR_9);
 switch (VAR_13) {
 default:

  if (VAR_2 == 0) {
   FUNC_10("unknown compression format");
   goto out;
  }
  VAR_11 = FUNC_1(VAR_9, sizeof VAR_9, &VAR_12, VAR_0);
  break;

 case 132:
  VAR_11 = FUNC_5(VAR_0, VAR_1,
         (char *)VAR_9, sizeof VAR_9, &VAR_12, "(stdin)");
  break;

 case 133:
  VAR_11 = FUNC_15(VAR_0, VAR_1,
    (char *)VAR_9, sizeof VAR_9, &VAR_12);
  break;


 case 128:
  if ((VAR_15 = FUNC_19(VAR_0)) == ((void*)0)) {
   FUNC_10("zopen of stdin");
   goto out;
  }

  VAR_11 = FUNC_20(VAR_15, VAR_5, (char *)VAR_9,
      sizeof VAR_9, &VAR_12);
  FUNC_2(VAR_15);
  break;


 case 130:
  VAR_11 = FUNC_17(VAR_0, VAR_1,
          (char *)VAR_9, sizeof VAR_9, &VAR_12);
  break;


 case 129:
  VAR_11 = FUNC_18(VAR_0, VAR_1,
        (char *)VAR_9, sizeof VAR_9, &VAR_12);
  break;


 case 131:
  VAR_11 = FUNC_16(VAR_0, VAR_1,
        (char *)VAR_9, sizeof VAR_9, &VAR_12);
  break;

 }


        if (VAR_7 && !VAR_6 && VAR_11 != -1 && VAR_12 != -1)
  FUNC_13(((void*)0), ((void*)0), VAR_11, VAR_12);
 if (VAR_7 && VAR_6)
  FUNC_12("(stdin)", VAR_11 != -1);




out:
 FUNC_6();
}

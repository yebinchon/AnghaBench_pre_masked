
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*) ;
 struct archive* FUNC_4 () ;
 int FUNC_5 (struct archive*,struct archive_entry**) ;
 int FUNC_6 (struct archive*,char const*,int) ;
 int FUNC_7 (struct archive*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (struct archive*,struct archive_entry*) ;
 int FUNC_11 (struct archive*,struct archive_entry*) ;
 int FUNC_12 (struct archive*,struct archive_entry*) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (char*,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (struct archive*,struct archive_entry*) ;
 int VAR_6 ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_15(const char *VAR_9)
{
 struct archive *VAR_10;
 struct archive_entry *VAR_11;
 int VAR_12;
 uintmax_t VAR_13, VAR_14, VAR_15;

 if ((VAR_10 = FUNC_4()) == ((void*)0))
  FUNC_8("archive_read_new failed");

 FUNC_0(FUNC_7(VAR_10));
 FUNC_0(FUNC_6(VAR_10, VAR_9, 8192));

 if (!VAR_8) {
  if (!VAR_3 && !VAR_4)
   FUNC_13("Archive:  %s\n", VAR_9);
  if (VAR_6 == 1) {
   FUNC_13("  Length     %sDate   Time    Name\n", VAR_7);
   FUNC_13(" --------    %s----   ----    ----\n", VAR_7);
  } else if (VAR_6 == 2) {
   FUNC_13(" Length   Method    Size  Ratio   %sDate   Time   CRC-32    Name\n", VAR_7);
   FUNC_13("--------  ------  ------- -----   %s----   ----   ------    ----\n", VAR_7);
  }
 }

 VAR_13 = 0;
 VAR_14 = 0;
 VAR_15 = 0;
 for (;;) {
  VAR_12 = FUNC_5(VAR_10, &VAR_11);
  if (VAR_12 == VAR_0)
   break;
  FUNC_0(VAR_12);
  if (!VAR_8) {
   if (VAR_5)
    VAR_15 += FUNC_14(VAR_10, VAR_11);
   else if (VAR_6)
    FUNC_12(VAR_10, VAR_11);
   else if (VAR_3 || VAR_2)
    FUNC_11(VAR_10, VAR_11);
   else
    FUNC_10(VAR_10, VAR_11);
  } else {
   if (VAR_1)
    FUNC_12(VAR_10, VAR_11);
  }

  VAR_13 += FUNC_1(VAR_11);
  ++VAR_14;
 }

 if (VAR_8) {
  if (VAR_6 == 1) {
   FUNC_13(" --------                   %s-------\n", VAR_7);
   FUNC_13(" %8ju                   %s%ju file%s\n",
       VAR_13, VAR_7, VAR_14, VAR_14 != 1 ? "s" : "");
  } else if (VAR_6 == 2) {
   FUNC_13("--------          -------  ---                            %s-------\n", VAR_7);
   FUNC_13("%8ju          %7ju   0%%                            %s%ju file%s\n",
       VAR_13, VAR_13, VAR_7, VAR_14,
       VAR_14 != 1 ? "s" : "");
  }
 }

 FUNC_0(FUNC_2(VAR_10));
 (void)FUNC_3(VAR_10);

 if (VAR_5) {
  if (VAR_15 > 0) {
   FUNC_9("%ju checksum error(s) found.", VAR_15);
  }
  else {
   FUNC_13("No errors detected in compressed data of %s.\n",
          VAR_9);
  }
 }
}

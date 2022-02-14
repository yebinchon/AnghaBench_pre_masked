
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int time_t ;
struct tm {int dummy; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive*) ;
 struct tm* FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,int,char*,struct tm*) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(struct archive *VAR_4, struct archive_entry *VAR_5)
{
 char VAR_6[20];
 time_t VAR_7;
 struct tm *VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = FUNC_5(&VAR_7);
 if (*VAR_2)
  FUNC_7(VAR_6, sizeof(VAR_6), "%m-%d-%G %R", VAR_8);
 else
  FUNC_7(VAR_6, sizeof(VAR_6), "%m-%d-%g %R", VAR_8);

 if (!VAR_3) {
  if (VAR_1 == 1) {
   FUNC_6(" %8ju  %s   %s\n",
       (uintmax_t)FUNC_3(VAR_5),
       VAR_6, FUNC_2(VAR_5));
  } else if (VAR_1 == 2) {
   FUNC_6("%8ju  Stored  %7ju   0%%  %s  %08x  %s\n",
       (uintmax_t)FUNC_3(VAR_5),
       (uintmax_t)FUNC_3(VAR_5),
       VAR_6,
       0U,
       FUNC_2(VAR_5));
  }
 } else {
  if (VAR_0)
   FUNC_6("%s\n",FUNC_2(VAR_5));
 }
 FUNC_0(FUNC_4(VAR_4));
}

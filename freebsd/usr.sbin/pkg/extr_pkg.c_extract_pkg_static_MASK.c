
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*,struct archive_entry*,int) ;
 int FUNC_3 (struct archive*) ;
 struct archive* FUNC_4 () ;
 int FUNC_5 (struct archive*,struct archive_entry**) ;
 int FUNC_6 (struct archive*,int,int) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (int,int ,int ) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int ,int) ;
 char* FUNC_12 (int ,char) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int ) ;

__attribute__((used)) static int
FUNC_15(int VAR_7, char *VAR_8, int VAR_9)
{
 struct archive *VAR_10;
 struct archive_entry *VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = -1;
 VAR_10 = FUNC_4();
 if (VAR_10 == ((void*)0)) {
  FUNC_13("archive_read_new");
  return (VAR_13);
 }
 FUNC_7(VAR_10);
 FUNC_8(VAR_10);

 if (FUNC_9(VAR_7, 0, 0) == -1) {
  FUNC_13("lseek");
  goto cleanup;
 }

 if (FUNC_6(VAR_10, VAR_7, 4096) != VAR_6) {
  FUNC_14("archive_read_open_fd: %s", FUNC_1(VAR_10));
  goto cleanup;
 }

 VAR_11 = ((void*)0);
 while ((VAR_14 = FUNC_5(VAR_10, &VAR_11)) == VAR_6) {
  VAR_12 = FUNC_12(FUNC_0(VAR_11), '/');
  if (VAR_12 == ((void*)0))
   continue;

  if (FUNC_10(VAR_12, "/pkg-static") == 0) {
   VAR_14 = FUNC_2(VAR_10, VAR_11,
       VAR_2 | VAR_3 |
       VAR_4 | VAR_0 |
       VAR_1 | VAR_5);
   FUNC_11(VAR_8, FUNC_0(VAR_11), VAR_9);
   break;
  }
 }

 if (VAR_14 == VAR_6)
  VAR_13 = 0;
 else
  FUNC_14("failed to extract pkg-static: %s",
      FUNC_1(VAR_10));

cleanup:
 FUNC_3(VAR_10);
 return (VAR_13);

}

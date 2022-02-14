
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive*) ;
 scalar_t__ FUNC_5 (struct archive*,int ,int) ;
 int FUNC_6 (struct archive*) ;
 int VAR_0 ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(struct archive *VAR_1, struct archive_entry *VAR_2)
{
 ssize_t VAR_3;
 int VAR_4;

 VAR_4 = 0;
 if (FUNC_0(FUNC_2(VAR_2)))
  return 0;

 FUNC_7("    testing: %s\t", FUNC_3(VAR_2));
 while ((VAR_3 = FUNC_5(VAR_1, VAR_0, sizeof VAR_0)) > 0)
               ;
 if (VAR_3 < 0) {
  FUNC_7(" %s\n", FUNC_4(VAR_1));
  ++VAR_4;
 } else {
  FUNC_7(" OK\n");
 }


 FUNC_1(FUNC_6(VAR_1));

 return VAR_4;
}

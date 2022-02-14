
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bundle_header {int dummy; } ;
typedef int header ;
struct TYPE_2__ {int have_repository; } ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int,char const**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (struct bundle_header*,int,char const**) ;
 int FUNC_6 (struct bundle_header*,int ,int) ;
 char* FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char const*,struct bundle_header*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int VAR_3 ;
 int FUNC_10 (int ,struct bundle_header*,int,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,struct bundle_header*,int) ;

int FUNC_13(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 struct bundle_header VAR_7;
 const char *VAR_8, *VAR_9;
 int VAR_10 = -1;

 if (VAR_4 < 3)
  FUNC_11(VAR_0);

 VAR_8 = VAR_5[1];
 VAR_9 = FUNC_7(VAR_6, VAR_5[2]);
 VAR_4 -= 2;
 VAR_5 += 2;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_9(VAR_8, "create") && (VAR_10 =
    FUNC_8(VAR_9, &VAR_7)) < 0)
  return 1;

 if (!FUNC_9(VAR_8, "verify")) {
  FUNC_1(VAR_10);
  if (VAR_4 != 1) {
   FUNC_11(VAR_0);
   return 1;
  }
  if (FUNC_12(VAR_3, &VAR_7, 1))
   return 1;
  FUNC_4(VAR_2, FUNC_0("%s is okay\n"), VAR_9);
  return 0;
 }
 if (!FUNC_9(VAR_8, "list-heads")) {
  FUNC_1(VAR_10);
  return !!FUNC_5(&VAR_7, VAR_4, VAR_5);
 }
 if (!FUNC_9(VAR_8, "create")) {
  if (VAR_4 < 2) {
   FUNC_11(VAR_0);
   return 1;
  }
  if (!VAR_1->have_repository)
   FUNC_3(FUNC_0("Need a repository to create a bundle."));
  return !!FUNC_2(VAR_3, VAR_9, VAR_4, VAR_5);
 } else if (!FUNC_9(VAR_8, "unbundle")) {
  if (!VAR_1->have_repository)
   FUNC_3(FUNC_0("Need a repository to unbundle."));
  return !!FUNC_10(VAR_3, &VAR_7, VAR_10, 0) ||
   FUNC_5(&VAR_7, VAR_4, VAR_5);
 } else
  FUNC_11(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; scalar_t__ len; } ;
typedef enum patch_format { ____Placeholder_patch_format } patch_format ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (char const*,char*) ;
 int * FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(const char **VAR_6)
{
 enum patch_format VAR_7 = VAR_4;
 struct strbuf VAR_8 = VAR_5;
 struct strbuf VAR_9 = VAR_5;
 struct strbuf VAR_10 = VAR_5;
 FILE *VAR_11;




 if (!*VAR_6 || !FUNC_6(*VAR_6, "-") || FUNC_1(*VAR_6))
  return VAR_1;






 VAR_11 = FUNC_7(*VAR_6, "r");

 while (!FUNC_4(&VAR_8, VAR_11)) {
  if (VAR_8)
   break;
 }

 if (FUNC_3(VAR_8, "From ") || FUNC_3(VAR_8, "From: ")) {
  VAR_7 = VAR_1;
  goto done;
 }

 if (FUNC_3(VAR_8, "# This series applies on GIT commit")) {
  VAR_7 = VAR_3;
  goto done;
 }

 if (!FUNC_6(VAR_8, "# HG changeset patch")) {
  VAR_7 = VAR_0;
  goto done;
 }

 FUNC_4(&VAR_9, VAR_11);
 FUNC_4(&VAR_10, VAR_11);





 if (VAR_8 && !VAR_9 &&
  (FUNC_3(VAR_10, "From:") ||
   FUNC_3(VAR_10, "Author:") ||
   FUNC_3(VAR_10, "Date:"))) {
  VAR_7 = VAR_2;
  goto done;
 }

 if (VAR_8 && FUNC_2(VAR_11)) {
  VAR_7 = VAR_1;
  goto done;
 }

done:
 FUNC_0(VAR_11);
 FUNC_5(&VAR_8);
 FUNC_5(&VAR_9);
 FUNC_5(&VAR_10);
 return VAR_7;
}

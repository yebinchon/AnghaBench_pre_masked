
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_options {int dummy; } ;
struct commit_list {struct commit* item; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (struct diff_options*,int ) ;
 int FUNC_1 (struct diff_options*,char const*) ;
 int FUNC_2 (struct diff_options*,char const*) ;
 scalar_t__ FUNC_3 (struct object_id*) ;
 struct commit* FUNC_4 (struct repository*,struct object_id*) ;
 scalar_t__ FUNC_5 (struct object_id*,struct object_id*) ;
 struct commit_list* FUNC_6 (struct repository*,struct commit*,struct commit*) ;
 int FUNC_7 (struct strbuf*,struct object_id*,int ) ;
 int FUNC_8 (struct strbuf*,char*,char const*) ;
 int FUNC_9 (struct strbuf*,char*) ;
 int FUNC_10 (struct strbuf*) ;

__attribute__((used)) static void FUNC_11(struct diff_options *VAR_4,
  const char *VAR_5,
  struct object_id *VAR_6, struct object_id *VAR_7,
  unsigned VAR_8,
  struct repository *VAR_9,
  struct commit **VAR_10, struct commit **VAR_11,
  struct commit_list **VAR_12)
{
 const char *VAR_13 = ((void*)0);
 struct strbuf VAR_14 = VAR_3;
 int VAR_15 = 0, VAR_16 = 0;

 if (VAR_8 & VAR_2)
  FUNC_2(VAR_4, VAR_5);

 if (VAR_8 & VAR_1)
  FUNC_1(VAR_4, VAR_5);

 if (FUNC_3(VAR_6))
  VAR_13 = "(new submodule)";
 else if (FUNC_3(VAR_7))
  VAR_13 = "(submodule deleted)";

 if (!VAR_9) {
  if (!VAR_13)
   VAR_13 = "(commits not present)";
  goto output_header;
 }





 *VAR_10 = FUNC_4(VAR_9, VAR_6);
 *VAR_11 = FUNC_4(VAR_9, VAR_7);





 if ((!FUNC_3(VAR_6) && !*VAR_10) ||
      (!FUNC_3(VAR_7) && !*VAR_11))
  VAR_13 = "(commits not present)";

 *VAR_12 = FUNC_6(VAR_9, *VAR_10, *VAR_11);
 if (*VAR_12) {
  if ((*VAR_12)->item == *VAR_10)
   VAR_15 = 1;
  else if ((*VAR_12)->item == *VAR_11)
   VAR_16 = 1;
 }

 if (FUNC_5(VAR_6, VAR_7)) {
  FUNC_10(&VAR_14);
  return;
 }

output_header:
 FUNC_8(&VAR_14, "Submodule %s ", VAR_5);
 FUNC_7(&VAR_14, VAR_6, VAR_0);
 FUNC_9(&VAR_14, (VAR_16 || VAR_15) ? ".." : "...");
 FUNC_7(&VAR_14, VAR_7, VAR_0);
 if (VAR_13)
  FUNC_8(&VAR_14, " %s\n", VAR_13);
 else
  FUNC_8(&VAR_14, "%s:\n", VAR_16 ? " (rewind)" : "");
 FUNC_0(VAR_4, VAR_14.buf);

 FUNC_10(&VAR_14);
}

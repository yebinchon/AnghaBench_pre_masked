
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct config_include_data {scalar_t__ depth; } ;
struct TYPE_2__ {char* path; char* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,scalar_t__,char const*,char*) ;
 int FUNC_4 (int ,...) ;
 char* FUNC_5 (char const*,int ) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char const*,struct config_include_data*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct strbuf*,char*,int) ;
 int FUNC_11 (struct strbuf*,char const*) ;
 int FUNC_12 (struct strbuf*) ;

__attribute__((used)) static int FUNC_13(const char *VAR_6, struct config_include_data *VAR_7)
{
 int VAR_8 = 0;
 struct strbuf VAR_9 = VAR_2;
 char *VAR_10;

 if (!VAR_6)
  return FUNC_2("include.path");

 VAR_10 = FUNC_5(VAR_6, 0);
 if (!VAR_10)
  return FUNC_4(FUNC_0("could not expand include path '%s'"), VAR_6);
 VAR_6 = VAR_10;





 if (!FUNC_9(VAR_6)) {
  char *VAR_11;

  if (!VAR_3 || !VAR_3->path)
   return FUNC_4(FUNC_0("relative config includes must come from files"));

  VAR_11 = FUNC_6(VAR_3->path);
  if (VAR_11)
   FUNC_10(&VAR_9, VAR_3->path, VAR_11 - VAR_3->path + 1);
  FUNC_11(&VAR_9, VAR_6);
  VAR_6 = VAR_9.buf;
 }

 if (!FUNC_1(VAR_6, VAR_1, 0)) {
  if (++VAR_7->depth > VAR_0)
   FUNC_3(FUNC_0(VAR_5), VAR_0, VAR_6,
       !VAR_3 ? "<unknown>" :
       VAR_3->name ? VAR_3->name :
       "the command line");
  VAR_8 = FUNC_8(VAR_4, VAR_6, VAR_7);
  VAR_7->depth--;
 }
 FUNC_12(&VAR_9);
 FUNC_7(VAR_10);
 return VAR_8;
}

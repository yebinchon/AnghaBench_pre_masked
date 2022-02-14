
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int dummy; } ;
struct diff_tempfile {int name; } ;
struct diff_filespec {int path; } ;
struct child_process {int use_shell; char const** argv; int out; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (struct child_process*) ;
 struct diff_tempfile* FUNC_3 (struct repository*,int ,struct diff_filespec*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct child_process*) ;
 char* FUNC_6 (struct strbuf*,size_t*) ;
 scalar_t__ FUNC_7 (struct strbuf*,int,int ) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static char *FUNC_9(struct repository *VAR_2,
     const char *VAR_3,
     struct diff_filespec *VAR_4,
     size_t *VAR_5)
{
 struct diff_tempfile *VAR_6;
 const char *VAR_7[3];
 const char **VAR_8 = VAR_7;
 struct child_process VAR_9 = VAR_0;
 struct strbuf VAR_10 = VAR_1;
 int VAR_11 = 0;

 VAR_6 = FUNC_3(VAR_2, VAR_4->path, VAR_4);
 *VAR_8++ = VAR_3;
 *VAR_8++ = VAR_6->name;
 *VAR_8 = ((void*)0);

 VAR_9.use_shell = 1;
 VAR_9.argv = VAR_7;
 VAR_9.out = -1;
 if (FUNC_5(&VAR_9)) {
  FUNC_4();
  return ((void*)0);
 }

 if (FUNC_7(&VAR_10, VAR_9.out, 0) < 0)
  VAR_11 = FUNC_1("error reading from textconv command '%s'", VAR_3);
 FUNC_0(VAR_9.out);

 if (FUNC_2(&VAR_9) || VAR_11) {
  FUNC_8(&VAR_10);
  FUNC_4();
  return ((void*)0);
 }
 FUNC_4();

 return FUNC_6(&VAR_10, VAR_5);
}

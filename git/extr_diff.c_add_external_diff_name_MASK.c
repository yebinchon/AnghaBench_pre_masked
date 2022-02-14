
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct diff_tempfile {int mode; int hex; int name; } ;
struct diff_filespec {int dummy; } ;
struct argv_array {int dummy; } ;


 int FUNC_0 (struct argv_array*,int ) ;
 struct diff_tempfile* FUNC_1 (struct repository*,char const*,struct diff_filespec*) ;

__attribute__((used)) static void FUNC_2(struct repository *VAR_0,
       struct argv_array *VAR_1,
       const char *VAR_2,
       struct diff_filespec *VAR_3)
{
 struct diff_tempfile *VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 FUNC_0(VAR_1, VAR_4->name);
 FUNC_0(VAR_1, VAR_4->hex);
 FUNC_0(VAR_1, VAR_4->mode);
}

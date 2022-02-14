
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_2__ {int ce_mode; } ;


 struct strbuf VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct strbuf*,char*,char const*) ;
 int FUNC_6 (struct strbuf*) ;
 int VAR_3 ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_4, int VAR_5,
       const char **VAR_6)
{
 struct strbuf VAR_7 = VAR_0;
 if (!FUNC_0(VAR_2[VAR_5]->ce_mode))
  FUNC_2(FUNC_1("Directory %s is in index and no submodule?"), VAR_4);
 if (!FUNC_3(&VAR_3))
  FUNC_2(FUNC_1("Please stage your changes to .gitmodules or stash them to proceed"));
 FUNC_5(&VAR_7, "%s/.git", VAR_4);
 *VAR_6 = FUNC_4(VAR_7.buf);
 if (*VAR_6)
  *VAR_6 = FUNC_7(*VAR_6);
 else
  *VAR_6 = VAR_1;
 FUNC_6(&VAR_7);
}

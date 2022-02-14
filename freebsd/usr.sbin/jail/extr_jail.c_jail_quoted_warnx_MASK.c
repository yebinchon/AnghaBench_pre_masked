
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfjail {char* name; int * intparams; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2(const struct cfjail *VAR_2, const char *VAR_3,
    const char *VAR_4)
{
 const char *VAR_5;

 if ((VAR_5 = VAR_2->name) || (VAR_5 = FUNC_0(VAR_2->intparams[VAR_0])) ||
     (VAR_5 = FUNC_0(VAR_2->intparams[VAR_1])))
  FUNC_1("\"%s\" %s", VAR_5, VAR_3);
 else
  FUNC_1("%s", VAR_4);
}

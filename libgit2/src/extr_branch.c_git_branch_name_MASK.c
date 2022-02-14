
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; } ;
typedef TYPE_1__ git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ) ;

int FUNC_5(
 const char **VAR_3,
 const git_reference *VAR_4)
{
 const char *VAR_5;

 FUNC_0(VAR_3 && VAR_4);

 VAR_5 = VAR_4->name;

 if (FUNC_2(VAR_4)) {
  VAR_5 += FUNC_4(VAR_1);
 } else if (FUNC_3(VAR_4)) {
  VAR_5 += FUNC_4(VAR_2);
 } else {
  FUNC_1(VAR_0,
    "reference '%s' is neither a local nor a remote branch.", VAR_4->name);
  return -1;
 }
 *VAR_3 = VAR_5;
 return 0;
}

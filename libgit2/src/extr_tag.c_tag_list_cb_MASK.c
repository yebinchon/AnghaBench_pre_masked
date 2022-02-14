
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int taglist; int * pattern; } ;
typedef TYPE_1__ tag_filter_data ;
typedef int git_oid ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *,char const*,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, git_oid *VAR_2, void *VAR_3)
{
 tag_filter_data *VAR_4 = (tag_filter_data *)VAR_3;
 FUNC_1(VAR_2);

 if (!*VAR_4->pattern ||
     FUNC_4(VAR_4->pattern, VAR_1 + VAR_0, 0) == 0)
 {
  char *VAR_5 = FUNC_2(VAR_1 + VAR_0);
  FUNC_0(VAR_5);

  return FUNC_3(VAR_4->taglist, VAR_5);
 }

 return 0;
}

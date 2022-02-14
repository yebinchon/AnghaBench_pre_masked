
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t git_repository_item_t ;
typedef int git_repository ;
typedef int git_buf ;
struct TYPE_2__ {scalar_t__ directory; scalar_t__ name; int fallback; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_4 (int const*,int ,int ) ;

int FUNC_5(git_buf *VAR_3, const git_repository *VAR_4, git_repository_item_t VAR_5)
{
 const char *VAR_6 = FUNC_4(VAR_4, VAR_2[VAR_5].parent, VAR_2[VAR_5].fallback);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_1, "path cannot exist in repository");
  return VAR_0;
 }

 if (FUNC_1(VAR_3, VAR_6) < 0)
  return -1;

 if (VAR_2[VAR_5].name) {
  if (FUNC_0(VAR_3, VAR_6, VAR_2[VAR_5].name) < 0)
   return -1;
 }

 if (VAR_2[VAR_5].directory) {
  if (FUNC_3(VAR_3) < 0)
   return -1;
 }

 return 0;
}

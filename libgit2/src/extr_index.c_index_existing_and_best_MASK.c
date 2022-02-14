
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char const* path; } ;
typedef TYPE_2__ const git_index_entry ;
struct TYPE_10__ {size_t length; TYPE_2__ const** contents; } ;
struct TYPE_12__ {TYPE_1__ entries; scalar_t__ ignore_case; } ;
typedef TYPE_3__ git_index ;


 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (size_t*,TYPE_3__*,char const*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(
 git_index_entry **VAR_1,
 size_t *VAR_2,
 git_index_entry **VAR_3,
 git_index *VAR_4,
 const git_index_entry *VAR_5)
{
 git_index_entry *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(&VAR_7,
  VAR_4, VAR_5->path, 0, FUNC_0(VAR_5));

 if (VAR_8 == 0) {
  *VAR_1 = VAR_4->entries.contents[VAR_7];
  *VAR_2 = VAR_7;
  *VAR_3 = VAR_4->entries.contents[VAR_7];
  return;
 }

 *VAR_1 = ((void*)0);
 *VAR_2 = 0;
 *VAR_3 = ((void*)0);

 if (FUNC_0(VAR_5) == 0) {
  for (; VAR_7 < VAR_4->entries.length; VAR_7++) {
   int (*VAR_9)(const char *VAR_10, const char *VAR_11) =
    VAR_4->ignore_case ? FUNC_1 : FUNC_2;

   VAR_6 = VAR_4->entries.contents[VAR_7];

   if (VAR_9(VAR_5->path, VAR_6->path) != 0)
    break;

   if (FUNC_0(VAR_6) == VAR_0) {
    *VAR_3 = VAR_6;
    continue;
   } else {
    *VAR_3 = VAR_6;
    break;
   }
  }
 }
}

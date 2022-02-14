
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* path; } ;
struct entry_internal {size_t pathlen; char* path; TYPE_2__ const entry; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_9__ {size_t length; struct entry_internal** contents; } ;
struct TYPE_11__ {TYPE_1__ entries; } ;
typedef TYPE_3__ git_index ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (size_t*,TYPE_3__*,char const*,size_t,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(git_index *VAR_0,
  const git_index_entry *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 const char *VAR_4 = VAR_1->path;
 const char *VAR_5 = VAR_4 + FUNC_4(VAR_4);

 for (;;) {
  size_t VAR_6, VAR_7;

  for (;;) {
   if (*--VAR_5 == '/')
    break;
   if (VAR_5 <= VAR_1->path)
    return 0;
  }
  VAR_6 = VAR_5 - VAR_4;

  if (!FUNC_1(&VAR_7, VAR_0, VAR_4, VAR_6, VAR_3)) {
   if (!VAR_2)
    return -1;

   if (FUNC_2(VAR_0, VAR_7) < 0)
    break;
   continue;
  }






  for (; VAR_7 < VAR_0->entries.length; ++VAR_7) {
   struct entry_internal *VAR_8 = VAR_0->entries.contents[VAR_7];

   if (VAR_8->pathlen <= VAR_6 ||
       VAR_8->path[VAR_6] != '/' ||
       FUNC_3(VAR_8->path, VAR_4, VAR_6))
    break;

   if (FUNC_0(&VAR_8->entry) == VAR_3)
    return 0;
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* path; } ;
struct entry_internal {size_t pathlen; char* path; TYPE_2__ const entry; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_8__ {size_t length; struct entry_internal** contents; } ;
struct TYPE_10__ {TYPE_1__ entries; } ;
typedef TYPE_3__ git_index ;


 int FUNC_0 (TYPE_2__ const*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_2 (char const*,char*,size_t) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(git_index *VAR_0,
  const git_index_entry *VAR_1, size_t VAR_2, int VAR_3)
{
 size_t VAR_4 = FUNC_3(VAR_1->path);
 int VAR_5 = FUNC_0(VAR_1);
 const char *VAR_6 = VAR_1->path;

 while (VAR_2 < VAR_0->entries.length) {
  struct entry_internal *VAR_7 = VAR_0->entries.contents[VAR_2++];

  if (VAR_4 >= VAR_7->pathlen)
   break;
  if (FUNC_2(VAR_6, VAR_7->path, VAR_4))
   break;
  if (FUNC_0(&VAR_7->entry) != VAR_5)
   continue;
  if (VAR_7->path[VAR_4] != '/')
   continue;
  if (!VAR_3)
   return -1;

  if (FUNC_1(VAR_0, --VAR_2) < 0)
   break;
 }
 return 0;
}

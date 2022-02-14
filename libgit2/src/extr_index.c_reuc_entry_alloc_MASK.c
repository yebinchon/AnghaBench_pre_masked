
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
struct reuc_entry_internal {size_t pathlen; int path; TYPE_1__ entry; } ;
typedef int git_index_reuc_entry ;


 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 struct reuc_entry_internal* FUNC_1 (int,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static git_index_reuc_entry *FUNC_4(const char *VAR_0)
{
 size_t VAR_1 = FUNC_3(VAR_0),
  VAR_2 = sizeof(struct reuc_entry_internal),
  VAR_3;
 struct reuc_entry_internal *VAR_4;

 if (FUNC_0(&VAR_3, VAR_2, VAR_1) ||
  FUNC_0(&VAR_3, VAR_3, 1))
  return ((void*)0);

 VAR_4 = FUNC_1(1, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->pathlen = VAR_1;
 FUNC_2(VAR_4->path, VAR_0, VAR_1);
 VAR_4->entry.path = VAR_4->path;

 return (git_index_reuc_entry *)VAR_4;
}

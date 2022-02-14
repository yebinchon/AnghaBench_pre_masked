
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_6__ {int* mode; int * oid; } ;
typedef TYPE_1__ git_index_reuc_entry ;
struct TYPE_7__ {int path; int id; int mode; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (TYPE_2__ const) ;
 int FUNC_1 (int *,int ,int,int const*,int,int const*,int,int const*) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(
 git_index *VAR_0,
 size_t VAR_1,
 const git_index_entry *VAR_2)
{
 const git_index_reuc_entry *VAR_3;
 int VAR_4[3] = { 0, 0, 0 };
 git_oid const *VAR_5[3] = { ((void*)0), ((void*)0), ((void*)0) };
 size_t VAR_6;

 if (!FUNC_0(*VAR_2))
  return 0;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_2->path)) != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
   VAR_4[VAR_6] = VAR_3->mode[VAR_6];
   VAR_5[VAR_6] = &VAR_3->oid[VAR_6];
  }
 }

 VAR_4[VAR_1] = VAR_2->mode;
 VAR_5[VAR_1] = &VAR_2->id;

 return FUNC_1(VAR_0, VAR_2->path,
  VAR_4[0], VAR_5[0], VAR_4[1], VAR_5[1], VAR_4[2], VAR_5[2]);
}

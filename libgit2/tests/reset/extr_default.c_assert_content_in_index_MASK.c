
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t count; int * strings; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_7__ {int id; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t*,int ,int ) ;
 TYPE_2__* FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(
 git_strarray *VAR_2,
 bool VAR_3,
 git_strarray *VAR_4)
{
 size_t VAR_5, VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  VAR_7 = FUNC_3(&VAR_6, VAR_1, VAR_2->strings[VAR_5]);

  if (VAR_3) {
   const git_index_entry *VAR_8;

   FUNC_0(VAR_7 != VAR_0);

   VAR_8 = FUNC_4(VAR_1, VAR_6);
   FUNC_0(VAR_8 != ((void*)0));

   if (!VAR_4)
    continue;

   FUNC_2(FUNC_5(&VAR_8->id, VAR_4->strings[VAR_5]));
  } else
   FUNC_1(VAR_3, VAR_7 != VAR_0);
 }
}

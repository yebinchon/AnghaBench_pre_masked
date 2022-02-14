
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_index_entry ;
struct TYPE_7__ {scalar_t__ cur; TYPE_3__* index; } ;
typedef TYPE_2__ git_index_conflict_iterator ;
struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_8__ {TYPE_1__ entries; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int * FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int const**,int const**,int const**,TYPE_3__*,scalar_t__) ;

int FUNC_4(
 const git_index_entry **VAR_1,
 const git_index_entry **VAR_2,
 const git_index_entry **VAR_3,
 git_index_conflict_iterator *VAR_4)
{
 const git_index_entry *VAR_5;
 int VAR_6;

 FUNC_0(VAR_1 && VAR_2 && VAR_3 && VAR_4);

 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);

 while (VAR_4->cur < VAR_4->index->entries.length) {
  VAR_5 = FUNC_2(VAR_4->index, VAR_4->cur);

  if (FUNC_1(VAR_5)) {
   if ((VAR_6 = FUNC_3(
    VAR_1,
    VAR_2,
    VAR_3,
    VAR_4->index,
    VAR_4->cur)) < 0)
    return VAR_6;

   VAR_4->cur += VAR_6;
   return 0;
  }

  VAR_4->cur++;
 }

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oidmap ;
typedef int git_oid ;
struct TYPE_3__ {scalar_t__ next_pos; size_t first_entry; int arr; } ;
typedef TYPE_1__ deletes_by_oid_queue ;


 int VAR_0 ;
 size_t* FUNC_0 (int ,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *,int const*) ;

__attribute__((used)) static int FUNC_2(size_t *VAR_1, git_oidmap *VAR_2, const git_oid *VAR_3)
{
 deletes_by_oid_queue *VAR_4;
 size_t *VAR_5;

 if ((VAR_4 = FUNC_1(VAR_2, VAR_3)) == ((void*)0))
  return VAR_0;

 if (VAR_4->next_pos == 0) {
  *VAR_1 = VAR_4->first_entry;
 } else {
  VAR_5 = FUNC_0(VAR_4->arr, VAR_4->next_pos - 1);
  if (VAR_5 == ((void*)0))
   return VAR_0;

  *VAR_1 = *VAR_5;
 }

 VAR_4->next_pos++;
 return 0;
}

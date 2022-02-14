
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct merge_msg_entry {scalar_t__ written; TYPE_1__* merge_head; } ;
struct TYPE_6__ {scalar_t__ length; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_5__ {int * remote_url; int * ref_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 struct merge_msg_entry* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
 const struct merge_msg_entry *VAR_1,
 git_vector *VAR_2)
{
 if (VAR_1->written == 0 &&
  VAR_1->merge_head->remote_url != ((void*)0) &&
  VAR_1->merge_head->ref_name != ((void*)0) &&
  FUNC_1(VAR_0, VAR_1->merge_head->ref_name, FUNC_3(VAR_0)) == 0)
 {
  struct merge_msg_entry *VAR_3;


  if (VAR_2->length == 0)
   return 1;

  VAR_3 = FUNC_2(VAR_2, 0);

  return (FUNC_0(VAR_3->merge_head->remote_url,
   VAR_1->merge_head->remote_url) == 0);
 }

 return 0;
}

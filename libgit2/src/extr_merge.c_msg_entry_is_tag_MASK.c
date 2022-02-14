
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_msg_entry {scalar_t__ written; TYPE_1__* merge_head; } ;
typedef int git_vector ;
struct TYPE_2__ {int * ref_name; int * remote_url; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
 const struct merge_msg_entry *VAR_1,
 git_vector *VAR_2)
{
 FUNC_0(VAR_2);

 return (VAR_1->written == 0 &&
  VAR_1->merge_head->remote_url == ((void*)0) &&
  VAR_1->merge_head->ref_name != ((void*)0) &&
  FUNC_1(VAR_0, VAR_1->merge_head->ref_name, FUNC_2(VAR_0)) == 0);
}

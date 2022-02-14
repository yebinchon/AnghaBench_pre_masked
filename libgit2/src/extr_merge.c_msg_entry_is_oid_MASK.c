
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_msg_entry {scalar_t__ written; TYPE_1__* merge_head; } ;
struct TYPE_2__ {int * remote_url; int * ref_name; } ;



__attribute__((used)) static int FUNC_0(
 const struct merge_msg_entry *VAR_0)
{
 return (VAR_0->written == 0 &&
  VAR_0->merge_head->ref_name == ((void*)0) &&
  VAR_0->merge_head->remote_url == ((void*)0));
}

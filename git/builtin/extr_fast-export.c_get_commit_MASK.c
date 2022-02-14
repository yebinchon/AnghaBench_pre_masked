
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const type; int oid; } ;
struct tag {scalar_t__ tagged; TYPE_1__ object; } ;
struct rev_cmdline_entry {int name; TYPE_2__* item; } ;
struct commit {int dummy; } ;
struct TYPE_6__ {struct tag* util; } ;
struct TYPE_5__ {int type; } ;




 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 TYPE_3__* FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct commit *FUNC_3(struct rev_cmdline_entry *VAR_2, char *VAR_3)
{
 switch (VAR_2->item->type) {
 case 129:
  return (struct commit *)VAR_2->item;
 case 128: {
  struct tag *VAR_4 = (struct tag *)VAR_2->item;


  while (VAR_4 && VAR_4->object.type == 128) {
   FUNC_1(VAR_1, &VAR_4->object.oid);
   FUNC_2(&VAR_0, VAR_3)->util = VAR_4;
   VAR_4 = (struct tag *)VAR_4->tagged;
  }
  if (!VAR_4)
   FUNC_0("Tag %s points nowhere?", VAR_2->name);
  return (struct commit *)VAR_4;
  break;
 }
 default:
  return ((void*)0);
 }
}

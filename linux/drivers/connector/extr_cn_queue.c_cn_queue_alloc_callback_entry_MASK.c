
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cn_queue_dev {int refcnt; } ;
struct TYPE_2__ {int id; int name; } ;
struct cn_callback_entry {void (* callback ) (struct cn_msg*,struct netlink_skb_parms*) ;TYPE_1__ id; struct cn_queue_dev* pdev; int refcnt; } ;
struct cb_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cn_callback_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct cb_id*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int,char*,char const*) ;

__attribute__((used)) static struct cn_callback_entry *
FUNC_6(struct cn_queue_dev *VAR_1, const char *VAR_2,
         struct cb_id *VAR_3,
         void (*VAR_4)(struct cn_msg *,
            struct netlink_skb_parms *))
{
 struct cn_callback_entry *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_3("Failed to create new callback queue.\n");
  return ((void*)0);
 }

 FUNC_4(&VAR_5->refcnt, 1);

 FUNC_0(&VAR_1->refcnt);
 VAR_5->pdev = VAR_1;

 FUNC_5(VAR_5->id.name, sizeof(VAR_5->id.name), "%s", VAR_2);
 FUNC_2(&VAR_5->id.id, VAR_3, sizeof(struct cb_id));
 VAR_5->callback = VAR_4;
 return VAR_5;
}

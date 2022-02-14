
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsi_port {int n_head; } ;
struct TYPE_2__ {int notifier_call; } ;
struct hsi_client {void (* ehandler ) (struct hsi_client*,unsigned long) ;TYPE_1__ nb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_2 ;
 struct hsi_port* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (struct hsi_client*) ;

int FUNC_3(struct hsi_client *VAR_3,
   void (*VAR_4)(struct hsi_client *, unsigned long))
{
 struct hsi_port *VAR_5 = FUNC_1(VAR_3);

 if (!VAR_4 || VAR_3->ehandler)
  return -VAR_1;
 if (!FUNC_2(VAR_3))
  return -VAR_0;
 VAR_3->ehandler = VAR_4;
 VAR_3->nb.notifier_call = VAR_2;

 return FUNC_0(&VAR_5->n_head, &VAR_3->nb);
}

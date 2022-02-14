
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_port {int n_head; } ;
struct hsi_client {int * ehandler; int nb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 struct hsi_port* FUNC_2 (struct hsi_client*) ;
 int FUNC_3 (struct hsi_client*) ;

int FUNC_4(struct hsi_client *VAR_0)
{
 struct hsi_port *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_0(!FUNC_3(VAR_0));

 VAR_2 = FUNC_1(&VAR_1->n_head, &VAR_0->nb);
 if (!VAR_2)
  VAR_0->ehandler = ((void*)0);

 return VAR_2;
}

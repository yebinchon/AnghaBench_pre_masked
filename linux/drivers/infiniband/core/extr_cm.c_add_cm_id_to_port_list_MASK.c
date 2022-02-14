
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cm_port {int cm_priv_altr_list; int cm_priv_prim_list; } ;
struct cm_av {int dummy; } ;
struct cm_id_private {int altr_list; struct cm_av alt_av; int prim_list; struct cm_av av; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct cm_id_private *VAR_2,
      struct cm_av *VAR_3,
      struct cm_port *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_1.lock, VAR_5);

 if (&VAR_2->av == VAR_3)
  FUNC_0(&VAR_2->prim_list, &VAR_4->cm_priv_prim_list);
 else if (&VAR_2->alt_av == VAR_3)
  FUNC_0(&VAR_2->altr_list, &VAR_4->cm_priv_altr_list);
 else
  VAR_6 = -VAR_0;

 FUNC_2(&VAR_1.lock, VAR_5);
 return VAR_6;
}

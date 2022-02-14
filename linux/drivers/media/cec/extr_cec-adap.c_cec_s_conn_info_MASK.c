
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_connector_info {int dummy; } ;
struct cec_adapter {int capabilities; int lock; struct cec_connector_info conn_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (struct cec_connector_info*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cec_adapter *VAR_1,
       const struct cec_connector_info *VAR_2)
{
 if (FUNC_0(VAR_1))
  return;

 if (!(VAR_1->capabilities & VAR_0))
  return;

 FUNC_3(&VAR_1->lock);
 if (VAR_2)
  VAR_1->conn_info = *VAR_2;
 else
  FUNC_2(&VAR_1->conn_info, 0, sizeof(VAR_1->conn_info));
 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->lock);
}

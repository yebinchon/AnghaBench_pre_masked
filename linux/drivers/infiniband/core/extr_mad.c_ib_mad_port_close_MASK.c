
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_port_private {int * qp_info; int pd; int cq; int wq; int port_list; } ;
struct ib_device {int dev; } ;


 int VAR_0 ;
 struct ib_mad_port_private* FUNC_0 (struct ib_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (struct ib_mad_port_private*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct ib_device *VAR_2, int VAR_3)
{
 struct ib_mad_port_private *VAR_4;
 unsigned long VAR_5;

 FUNC_9(&VAR_1, VAR_5);
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_10(&VAR_1, VAR_5);
  FUNC_4(&VAR_2->dev, "Port %d not found\n", VAR_3);
  return -VAR_0;
 }
 FUNC_8(&VAR_4->port_list);
 FUNC_10(&VAR_1, VAR_5);

 FUNC_3(VAR_4->wq);
 FUNC_2(&VAR_4->qp_info[1]);
 FUNC_2(&VAR_4->qp_info[0]);
 FUNC_6(VAR_4->cq);
 FUNC_5(VAR_4->pd);
 FUNC_1(&VAR_4->qp_info[1]);
 FUNC_1(&VAR_4->qp_info[0]);


 FUNC_7(VAR_4);

 return 0;
}

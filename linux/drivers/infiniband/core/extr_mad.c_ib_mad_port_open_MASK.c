
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_port_private {int port_num; int pd; int * qp_info; int cq; int wq; int port_list; struct ib_device* device; int reg_lock; } ;
struct ib_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct ib_device*,struct ib_mad_port_private*,int,int ,int ) ;
 int FUNC_10 (struct ib_device*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (struct ib_mad_port_private*) ;
 int FUNC_14 (struct ib_mad_port_private*,int *) ;
 int FUNC_15 (struct ib_mad_port_private*) ;
 struct ib_mad_port_private* FUNC_16 (int,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (struct ib_device*,int) ;
 scalar_t__ FUNC_20 (struct ib_device*,int) ;
 scalar_t__ FUNC_21 (struct ib_device*,int) ;
 int FUNC_22 (char*,int,char*,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_26(struct ib_device *VAR_13,
       int VAR_14)
{
 int VAR_15, VAR_16;
 struct ib_mad_port_private *VAR_17;
 unsigned long VAR_18;
 char VAR_19[sizeof "ib_mad123"];
 int VAR_20;

 if (FUNC_2(FUNC_21(VAR_13, VAR_14) < VAR_3))
  return -VAR_0;

 if (FUNC_2(FUNC_20(VAR_13, VAR_14) &&
      FUNC_21(VAR_13, VAR_14) < VAR_7))
  return -VAR_0;


 VAR_17 = FUNC_16(sizeof *VAR_17, VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->device = VAR_13;
 VAR_17->port_num = VAR_14;
 FUNC_23(&VAR_17->reg_lock);
 FUNC_14(VAR_17, &VAR_17->qp_info[0]);
 FUNC_14(VAR_17, &VAR_17->qp_info[1]);

 VAR_16 = VAR_12 + VAR_11;
 VAR_20 = FUNC_19(VAR_13, VAR_14);
 if (VAR_20)
  VAR_16 *= 2;

 VAR_17->pd = FUNC_10(VAR_13, 0);
 if (FUNC_0(VAR_17->pd)) {
  FUNC_8(&VAR_13->dev, "Couldn't create ib_mad PD\n");
  VAR_15 = FUNC_1(VAR_17->pd);
  goto error3;
 }

 VAR_17->cq = FUNC_9(VAR_17->device, VAR_17, VAR_16, 0,
   VAR_4);
 if (FUNC_0(VAR_17->cq)) {
  FUNC_8(&VAR_13->dev, "Couldn't create ib_mad CQ\n");
  VAR_15 = FUNC_1(VAR_17->cq);
  goto error4;
 }

 if (VAR_20) {
  VAR_15 = FUNC_5(&VAR_17->qp_info[0], VAR_6);
  if (VAR_15)
   goto error6;
 }
 VAR_15 = FUNC_5(&VAR_17->qp_info[1], VAR_5);
 if (VAR_15)
  goto error7;

 FUNC_22(VAR_19, sizeof VAR_19, "ib_mad%d", VAR_14);
 VAR_17->wq = FUNC_3(VAR_19, VAR_8);
 if (!VAR_17->wq) {
  VAR_15 = -VAR_1;
  goto error8;
 }

 FUNC_24(&VAR_10, VAR_18);
 FUNC_17(&VAR_17->port_list, &VAR_9);
 FUNC_25(&VAR_10, VAR_18);

 VAR_15 = FUNC_13(VAR_17);
 if (VAR_15) {
  FUNC_8(&VAR_13->dev, "Couldn't start port\n");
  goto error9;
 }

 return 0;

error9:
 FUNC_24(&VAR_10, VAR_18);
 FUNC_18(&VAR_17->port_list);
 FUNC_25(&VAR_10, VAR_18);

 FUNC_7(VAR_17->wq);
error8:
 FUNC_6(&VAR_17->qp_info[1]);
error7:
 FUNC_6(&VAR_17->qp_info[0]);
error6:
 FUNC_12(VAR_17->cq);
 FUNC_4(&VAR_17->qp_info[1]);
 FUNC_4(&VAR_17->qp_info[0]);
error4:
 FUNC_11(VAR_17->pd);
error3:
 FUNC_15(VAR_17);

 return VAR_15;
}

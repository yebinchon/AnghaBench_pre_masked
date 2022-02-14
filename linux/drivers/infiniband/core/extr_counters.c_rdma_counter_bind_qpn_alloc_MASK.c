
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct rdma_counter {int id; } ;
struct ib_qp {size_t port; int res; } ;
struct ib_device {TYPE_2__* port_data; } ;
struct TYPE_3__ {int hstats; } ;
struct TYPE_4__ {TYPE_1__ port_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rdma_counter* FUNC_0 (struct ib_device*,size_t,int ) ;
 int FUNC_1 (struct rdma_counter*,struct ib_qp*) ;
 int FUNC_2 (struct rdma_counter*) ;
 struct ib_qp* FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (struct rdma_counter*,struct ib_qp*) ;
 scalar_t__ FUNC_5 (struct ib_device*,size_t) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ib_device *VAR_5, u8 VAR_6,
    u32 VAR_7, u32 *VAR_8)
{
 struct rdma_counter *VAR_9;
 struct ib_qp *VAR_10;
 int VAR_11;

 if (!FUNC_5(VAR_5, VAR_6))
  return -VAR_0;

 if (!VAR_5->port_data[VAR_6].port_counter.hstats)
  return -VAR_3;

 VAR_10 = FUNC_3(VAR_5, VAR_7);
 if (!VAR_10)
  return -VAR_1;

 if (FUNC_5(VAR_5, VAR_10->port) && (VAR_10->port != VAR_6)) {
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_4);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto err;
 }

 VAR_11 = FUNC_1(VAR_9, VAR_10);
 if (VAR_11)
  goto err_bind;

 if (VAR_8)
  *VAR_8 = VAR_9->id;

 FUNC_4(VAR_9, VAR_10);

 FUNC_6(&VAR_10->res);
 return VAR_11;

err_bind:
 FUNC_2(VAR_9);
err:
 FUNC_6(&VAR_10->res);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tp_tcp_stats {int tcp_out_rsts; int tcp_retrans_segs; int tcp_out_segs; int tcp_in_segs; } ;
struct rdma_hw_stats {int num_counters; int * value; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int pdev; } ;
struct TYPE_4__ {TYPE_1__ lldi; } ;
struct c4iw_dev {TYPE_2__ rdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,struct tp_tcp_stats*,struct tp_tcp_stats*) ;
 struct c4iw_dev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_8,
   struct rdma_hw_stats *VAR_9,
   u8 VAR_10, int VAR_11)
{
 struct tp_tcp_stats VAR_12, VAR_13;
 struct c4iw_dev *VAR_14 = FUNC_1(VAR_8);

 FUNC_0(VAR_14->rdev.lldi.pdev, &VAR_12, &VAR_13);
 VAR_9->value[VAR_0] = VAR_12;
 VAR_9->value[VAR_2] = VAR_12;
 VAR_9->value[VAR_3] = VAR_12;
 VAR_9->value[VAR_1] = VAR_12;
 VAR_9->value[VAR_4] = VAR_13;
 VAR_9->value[VAR_6] = VAR_13;
 VAR_9->value[VAR_7] = VAR_13;
 VAR_9->value[VAR_5] = VAR_13;

 return VAR_9->num_counters;
}

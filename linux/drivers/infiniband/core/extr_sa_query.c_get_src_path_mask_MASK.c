
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_sa_port {int ah_lock; TYPE_1__* sm_ah; } ;
struct ib_sa_device {int start_port; struct ib_sa_port* port; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int src_path_mask; } ;


 struct ib_sa_device* FUNC_0 (struct ib_device*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u8 FUNC_3(struct ib_device *VAR_1, u8 VAR_2)
{
 struct ib_sa_device *VAR_3;
 struct ib_sa_port *VAR_4;
 unsigned long VAR_5;
 u8 VAR_6;

 VAR_3 = FUNC_0(VAR_1, &VAR_0);
 if (!VAR_3)
  return 0x7f;

 VAR_4 = &VAR_3->port[VAR_2 - VAR_3->start_port];
 FUNC_1(&VAR_4->ah_lock, VAR_5);
 VAR_6 = VAR_4->sm_ah ? VAR_4->sm_ah->src_path_mask : 0x7f;
 FUNC_2(&VAR_4->ah_lock, VAR_5);

 return VAR_6;
}

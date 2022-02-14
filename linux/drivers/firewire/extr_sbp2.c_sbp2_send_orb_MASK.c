
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sbp2_pointer {int low; scalar_t__ high; } ;
struct sbp2_orb {int t; int kref; int link; struct sbp2_logical_unit* lu; int request_bus; } ;
struct sbp2_logical_unit {TYPE_1__* tgt; int orb_list; } ;
struct fw_device {int max_speed; int card; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int,int,int ,int ,struct sbp2_pointer*,int,int ,struct sbp2_orb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct fw_device* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct sbp2_orb *VAR_2, struct sbp2_logical_unit *VAR_3,
     int VAR_4, int VAR_5, u64 VAR_6)
{
 struct fw_device *VAR_7 = FUNC_6(VAR_3->tgt);
 struct sbp2_pointer VAR_8;
 unsigned long VAR_9;

 VAR_8.high = 0;
 VAR_8.low = FUNC_0(VAR_2->request_bus);

 VAR_2->lu = VAR_3;
 FUNC_4(&VAR_3->tgt->lock, VAR_9);
 FUNC_3(&VAR_2->link, &VAR_3->orb_list);
 FUNC_5(&VAR_3->tgt->lock, VAR_9);

 FUNC_2(&VAR_2->kref);
 FUNC_2(&VAR_2->kref);

 FUNC_1(VAR_7->card, &VAR_2->t, VAR_0,
   VAR_4, VAR_5, VAR_7->max_speed, VAR_6,
   &VAR_8, 8, VAR_1, VAR_2);
}

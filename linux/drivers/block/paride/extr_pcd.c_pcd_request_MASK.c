
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcd_unit {int dummy; } ;
struct TYPE_6__ {int bio; TYPE_1__* rq_disk; } ;
struct TYPE_5__ {struct pcd_unit* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pcd_unit* VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 struct pcd_unit *VAR_9;

 if (VAR_4)
  return;

 if (!VAR_7 && !FUNC_4())
  return;

 VAR_9 = VAR_7->rq_disk->private_data;
 if (VAR_9 != VAR_6)
  VAR_3 = -1;
 VAR_6 = VAR_9;
 VAR_8 = FUNC_2(VAR_7);
 VAR_5 = FUNC_1(VAR_7);
 VAR_2 = FUNC_0(VAR_7->bio);
 VAR_4 = 1;
 FUNC_3(VAR_0, ((void*)0), 0, VAR_1);
}

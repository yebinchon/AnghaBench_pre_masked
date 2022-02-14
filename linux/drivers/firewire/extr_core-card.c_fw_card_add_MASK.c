
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct fw_card {int link; TYPE_1__* driver; int guid; void* link_speed; void* max_receive; } ;
struct TYPE_2__ {int (* enable ) (struct fw_card*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_card*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fw_card*,int ,int ) ;
 int VAR_3 ;

int FUNC_5(struct fw_card *VAR_4,
  u32 VAR_5, u32 VAR_6, u64 VAR_7)
{
 int VAR_8;

 VAR_4->max_receive = VAR_5;
 VAR_4->link_speed = VAR_6;
 VAR_4->guid = VAR_7;

 FUNC_2(&VAR_1);

 FUNC_0(VAR_4, VAR_3);
 VAR_8 = VAR_4->driver->enable(VAR_4, VAR_3, VAR_2);
 if (VAR_8 == 0)
  FUNC_1(&VAR_4->link, &VAR_0);

 FUNC_3(&VAR_1);

 return VAR_8;
}

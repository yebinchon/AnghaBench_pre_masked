
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3disk_private {int gendisk; int tag_set; int queue; } ;
struct ps3_system_bus_device {int core; } ;
struct TYPE_2__ {int core; } ;
struct ps3_storage_device {struct ps3disk_private* bounce_buf; TYPE_1__ sbd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ps3disk_private*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct ps3disk_private* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct ps3_system_bus_device*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (struct ps3_storage_device*) ;
 int FUNC_13 (struct ps3_storage_device*) ;
 int FUNC_14 (int ) ;
 struct ps3_storage_device* FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct ps3_system_bus_device *VAR_3)
{
 struct ps3_storage_device *VAR_4 = FUNC_15(&VAR_3->core);
 struct ps3disk_private *VAR_5 = FUNC_10(&VAR_4->sbd);

 FUNC_8(&VAR_2);
 FUNC_1(FUNC_0(FUNC_6(VAR_5->gendisk)) / VAR_0,
      &VAR_1);
 FUNC_9(&VAR_2);
 FUNC_4(VAR_5->gendisk);
 FUNC_2(VAR_5->queue);
 FUNC_3(&VAR_5->tag_set);
 FUNC_14(VAR_5->gendisk);
 FUNC_5(&VAR_4->sbd.core, "Synchronizing disk cache\n");
 FUNC_12(VAR_4);
 FUNC_13(VAR_4);
 FUNC_7(VAR_4->bounce_buf);
 FUNC_7(VAR_5);
 FUNC_11(VAR_3, ((void*)0));
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int dummy; } ;
struct kfd_dbgdev {int type; int dbgdev_address_watch; int dbgdev_wave_control; int dbgdev_unregister; int dbgdev_register; int * pqm; int * kq; struct kfd_dev* dev; } ;
typedef enum DBGDEV_TYPE { ____Placeholder_DBGDEV_TYPE } DBGDEV_TYPE ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(struct kfd_dbgdev *VAR_8, struct kfd_dev *VAR_9,
   enum DBGDEV_TYPE VAR_10)
{
 VAR_8->dev = VAR_9;
 VAR_8->kq = ((void*)0);
 VAR_8->type = VAR_10;
 VAR_8->pqm = ((void*)0);

 switch (VAR_10) {
 case 128:
  VAR_8->dbgdev_register = VAR_3;
  VAR_8->dbgdev_unregister = VAR_5;
  VAR_8->dbgdev_wave_control = VAR_7;
  VAR_8->dbgdev_address_watch = VAR_1;
  break;
 case 129:
 default:
  VAR_8->dbgdev_register = VAR_2;
  VAR_8->dbgdev_unregister = VAR_4;
  VAR_8->dbgdev_wave_control = VAR_6;
  VAR_8->dbgdev_address_watch = VAR_0;
  break;
 }

}

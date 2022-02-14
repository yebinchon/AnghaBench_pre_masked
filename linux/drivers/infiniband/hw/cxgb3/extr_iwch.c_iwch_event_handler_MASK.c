
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct t3cdev {struct cxio_rdev* ulp; } ;
struct iwch_dev {int ibdev; int db_drop_task; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {TYPE_1__ element; int * device; int event; } ;
struct cxio_rdev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (struct iwch_dev*) ;
 int FUNC_1 (struct iwch_dev*,int) ;
 int FUNC_2 (unsigned short*,int) ;
 int FUNC_3 (struct ib_event*) ;
 struct iwch_dev* FUNC_4 (struct cxio_rdev*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned long) ;

__attribute__((used)) static void FUNC_8(struct t3cdev *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct cxio_rdev *VAR_7 = VAR_4->ulp;
 struct iwch_dev *VAR_8;
 struct ib_event VAR_9;
 u32 VAR_10 = VAR_6 + 1;
 int VAR_11 = 0;

 if (!VAR_7)
  return;
 VAR_8 = FUNC_4(VAR_7);
 switch (VAR_5) {
 case 128: {
  VAR_7->flags = VAR_0;
  FUNC_6();
  VAR_9.event = VAR_1;
  VAR_11 = 1;
  break;
  }
 case 130: {
  VAR_9.event = VAR_3;
  VAR_11 = 1;
  break;
  }
 case 129: {
  VAR_9.event = VAR_2;
  VAR_11 = 1;
  break;
  }
 case 131: {
  FUNC_0(VAR_8);
  break;
  }
 case 132: {
  FUNC_1(VAR_8, 1);
  break;
  }
 case 133: {
  unsigned long VAR_12 = 1000;
  unsigned short VAR_13;

  FUNC_0(VAR_8);
  FUNC_2(&VAR_13, 2);
  VAR_12 += VAR_13 & 1023;




  FUNC_5(&VAR_8->db_drop_task,
   FUNC_7(VAR_12));
  break;
  }
 }

 if (VAR_11) {
  VAR_9.device = &VAR_8->ibdev;
  VAR_9.element.port_num = VAR_10;
  FUNC_3(&VAR_9);
 }

 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int head; int tail; void** buf; } ;
struct iforce {TYPE_3__* xport_ops; int xmit_lock; TYPE_2__ xmit; TYPE_1__* dev; } ;
struct TYPE_6__ {int (* xmit ) (struct iforce*) ;} ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int VAR_0 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (void**,unsigned char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct iforce*) ;

int FUNC_10(struct iforce *VAR_1, u16 VAR_2, unsigned char* VAR_3)
{

 int VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 int VAR_6;
 int VAR_7, VAR_8;
 unsigned long VAR_9;




 FUNC_7(&VAR_1->xmit_lock, VAR_9);

 VAR_7 = VAR_1->xmit.head;
 VAR_8 = VAR_1->xmit.tail;


 if (FUNC_0(VAR_7, VAR_8, VAR_0) < VAR_4+2) {
  FUNC_5(&VAR_1->dev->dev,
    "not enough space in xmit buffer to send new packet\n");
  FUNC_8(&VAR_1->xmit_lock, VAR_9);
  return -1;
 }

 VAR_6 = VAR_7 == VAR_8;
 FUNC_4(VAR_1->xmit.head, VAR_4+2);




 VAR_1->xmit.buf[VAR_7] = FUNC_2(VAR_2);
 FUNC_4(VAR_7, 1);
 VAR_1->xmit.buf[VAR_7] = FUNC_3(VAR_2);
 FUNC_4(VAR_7, 1);

 VAR_5 = FUNC_1(VAR_7, VAR_8, VAR_0);
 if (VAR_4 < VAR_5) VAR_5=VAR_4;

 FUNC_6(&VAR_1->xmit.buf[VAR_7],
        VAR_3,
        VAR_5);
 if (VAR_4 != VAR_5) {
  FUNC_6(&VAR_1->xmit.buf[0],
         VAR_3 + VAR_5,
         VAR_4 - VAR_5);
 }
 FUNC_4(VAR_7, VAR_4);

 FUNC_8(&VAR_1->xmit_lock, VAR_9);



 if (VAR_6)
  VAR_1->xport_ops->xmit(VAR_1);

 return 0;
}

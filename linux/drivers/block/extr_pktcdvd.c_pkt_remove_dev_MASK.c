
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int thread; } ;
struct pktcdvd_device {scalar_t__ pkt_dev; scalar_t__ refcnt; int rb_pool; TYPE_2__* disk; int name; int bdev; TYPE_1__ cdrw; } ;
typedef scalar_t__ dev_t ;
struct TYPE_5__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct pktcdvd_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,struct pktcdvd_device*,char*) ;
 int FUNC_11 (struct pktcdvd_device*) ;
 struct pktcdvd_device** VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct pktcdvd_device*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(dev_t VAR_10)
{
 struct pktcdvd_device *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 FUNC_8(&VAR_7, VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  VAR_11 = VAR_8[VAR_12];
  if (VAR_11 && (VAR_11->pkt_dev == VAR_10))
   break;
 }
 if (VAR_12 == VAR_4) {
  FUNC_13("dev not setup\n");
  VAR_13 = -VAR_1;
  goto out;
 }

 if (VAR_11->refcnt > 0) {
  VAR_13 = -VAR_0;
  goto out;
 }
 if (!FUNC_0(VAR_11->cdrw.thread))
  FUNC_5(VAR_11->cdrw.thread);

 VAR_8[VAR_12] = ((void*)0);

 FUNC_11(VAR_11);
 FUNC_12(VAR_11);

 FUNC_2(VAR_11->bdev, VAR_3 | VAR_2);

 FUNC_15(VAR_11->name, VAR_9);
 FUNC_10(1, VAR_11, "writer unmapped\n");

 FUNC_3(VAR_11->disk);
 FUNC_1(VAR_11->disk->queue);
 FUNC_14(VAR_11->disk);

 FUNC_6(&VAR_11->rb_pool);
 FUNC_4(VAR_11);


 FUNC_7(VAR_6);

out:
 FUNC_9(&VAR_7);
 return VAR_13;
}

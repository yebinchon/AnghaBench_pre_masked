
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {char* name; TYPE_1__* bdev; int pkt_dev; } ;
struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bd_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct pktcdvd_device** VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct class *VAR_4, struct class_attribute *VAR_5,
          char *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 FUNC_2(&VAR_2, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  struct pktcdvd_device *VAR_9 = VAR_3[VAR_8];
  if (!VAR_9)
   continue;
  VAR_7 += FUNC_4(VAR_6+VAR_7, "%s %u:%u %u:%u\n",
   VAR_9->name,
   FUNC_0(VAR_9->pkt_dev), FUNC_1(VAR_9->pkt_dev),
   FUNC_0(VAR_9->bdev->bd_dev),
   FUNC_1(VAR_9->bdev->bd_dev));
 }
 FUNC_3(&VAR_2);
 return VAR_7;
}

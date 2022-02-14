
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {struct ata_device* device; } ;
struct ata_device {int devno; struct ata_link* link; } ;


 int FUNC_0 (struct ata_device*) ;

struct ata_device *FUNC_1(struct ata_device *VAR_0)
{
 struct ata_link *VAR_1 = VAR_0->link;
 struct ata_device *VAR_2 = &VAR_1->device[1 - VAR_0->devno];
 if (!FUNC_0(VAR_2))
  return ((void*)0);
 return VAR_2;
}

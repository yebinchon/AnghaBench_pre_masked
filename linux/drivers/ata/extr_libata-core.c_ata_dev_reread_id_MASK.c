
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ata_device {unsigned int class; int id; TYPE_2__* link; } ;
typedef int id ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {scalar_t__ sector_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_device*,unsigned int*,unsigned int,int *) ;
 int FUNC_1 (struct ata_device*,unsigned int,int *) ;
 int FUNC_2 (int ,int *,int) ;

int FUNC_3(struct ata_device *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2->class;
 u16 *VAR_5 = (void *)VAR_2->link->ap->sector_buf;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_2, &VAR_4, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;


 if (!FUNC_1(VAR_2, VAR_4, VAR_5))
  return -VAR_1;

 FUNC_2(VAR_2->id, VAR_5, sizeof(VAR_5[0]) * VAR_0);
 return 0;
}

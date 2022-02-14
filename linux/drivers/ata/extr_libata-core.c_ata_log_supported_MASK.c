
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {int * sector_buf; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_device*,int ,int ,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ata_device *VAR_1, u8 VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->link->ap;

 if (FUNC_0(VAR_1, VAR_0, 0, VAR_3->sector_buf, 1))
  return 0;
 return FUNC_1(&VAR_3->sector_buf[VAR_2 * 2]) ? 1 : 0;
}

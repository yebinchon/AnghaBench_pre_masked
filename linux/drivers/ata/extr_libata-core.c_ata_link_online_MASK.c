
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_link {TYPE_1__* ap; } ;
struct TYPE_2__ {struct ata_link* slave_link; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ata_link*) ;

bool FUNC_2(struct ata_link *VAR_0)
{
 struct ata_link *VAR_1 = VAR_0->ap->slave_link;

 FUNC_0(VAR_0 == VAR_1);

 return FUNC_1(VAR_0) ||
  (VAR_1 && FUNC_1(VAR_1));
}

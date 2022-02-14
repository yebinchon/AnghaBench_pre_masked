
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ eh_owner; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned long,unsigned long) ;

void FUNC_4(struct ata_port *VAR_2, unsigned int VAR_3)
{
 bool VAR_4 = VAR_2 && VAR_2->host->eh_owner == VAR_1;

 if (VAR_4)
  FUNC_1(VAR_2);

 if (VAR_3 < 20) {
  unsigned long VAR_5 = VAR_3 * VAR_0;
  FUNC_3(VAR_5, VAR_5 + 50);
 } else {
  FUNC_2(VAR_3);
 }

 if (VAR_4)
  FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_link {TYPE_1__* ap; } ;
struct TYPE_2__ {int port_no; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_link*,unsigned int*) ;
 int FUNC_1 (scalar_t__,int,int*) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(struct ata_link *VAR_1, unsigned int *VAR_2)
{
 u8 VAR_3;
 int VAR_4 = 4 << VAR_1->ap->port_no;


 if (VAR_0) {

  FUNC_1(VAR_0, 0x58, &VAR_3);
  VAR_3 &= ~VAR_4;
  FUNC_2(VAR_0, 0x58, VAR_3);
  VAR_3 |= VAR_4;
  FUNC_2(VAR_0, 0x58, VAR_3);
 }
 FUNC_0(VAR_1, VAR_2);
}

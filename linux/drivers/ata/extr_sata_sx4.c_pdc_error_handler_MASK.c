
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int pflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1)
{
 if (!(VAR_1->pflags & VAR_0))
  FUNC_1(VAR_1);

 FUNC_0(VAR_1);
}

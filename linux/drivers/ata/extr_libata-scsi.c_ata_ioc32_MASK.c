
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int flags; int pflags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ata_port *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return 1;
 if (VAR_2->pflags & VAR_1)
  return 1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct ata_device *VAR_2, unsigned long VAR_3)
{
 if (FUNC_0(VAR_2->id))
  VAR_3 &= ~((0xE << VAR_1) | VAR_0);

 return VAR_3;
}

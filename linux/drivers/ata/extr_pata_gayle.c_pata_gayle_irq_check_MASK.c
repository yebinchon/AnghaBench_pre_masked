
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_port {scalar_t__ private_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static bool FUNC_1(struct ata_port *VAR_1)
{
 u8 VAR_2;

 VAR_2 = FUNC_0((unsigned long)VAR_1->private_data);

 return !!(VAR_2 & VAR_0);
}

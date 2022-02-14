
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_port {scalar_t__ private_data; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static bool FUNC_1(struct ata_port *VAR_0)
{
 u8 VAR_1;

 VAR_1 = FUNC_0((unsigned long)VAR_0->private_data);

 return !!(VAR_1 & 0x80);
}

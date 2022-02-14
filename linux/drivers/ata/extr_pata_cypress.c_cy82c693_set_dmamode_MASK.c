
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int port_no; } ;
struct ata_device {int dma_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 int VAR_5 = VAR_0 + VAR_3->port_no;


 FUNC_0(VAR_5, 0x22);
 FUNC_0(VAR_4->dma_mode - VAR_2, 0x23);


 FUNC_0(VAR_1, 0x22);
 FUNC_0(0x50, 0x23);
}

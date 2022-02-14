
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int dummy; } ;
struct ata_device {scalar_t__ pio_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 unsigned long VAR_4;
 FUNC_1(&VAR_1, VAR_4);
 FUNC_0(VAR_2, VAR_3, VAR_3->pio_mode - VAR_0);
 FUNC_2(&VAR_1, VAR_4);
}

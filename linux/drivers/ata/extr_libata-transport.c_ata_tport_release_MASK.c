
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_port {int host; } ;


 int FUNC_0 (int ) ;
 struct ata_port* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct ata_port *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1->host);
}

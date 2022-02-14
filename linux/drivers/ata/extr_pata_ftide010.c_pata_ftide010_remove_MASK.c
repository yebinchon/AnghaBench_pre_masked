
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ftide010 {int pclk; int host; } ;
struct ata_host {struct ftide010* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ata_host* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_3(VAR_0);
 struct ftide010 *VAR_2 = VAR_1->private_data;

 FUNC_1(VAR_2->host);
 if (!FUNC_0(VAR_2->pclk))
  FUNC_2(VAR_2->pclk);

 return 0;
}

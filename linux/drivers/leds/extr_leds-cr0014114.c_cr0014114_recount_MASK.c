
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cr0014114 {size_t count; int dev; int spi; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct cr0014114 *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 u8 VAR_6;

 FUNC_0(VAR_3->dev, "LEDs recount is started\n");

 VAR_6 = VAR_1;
 VAR_4 = FUNC_3(VAR_3->spi, &VAR_6, sizeof(VAR_6));
 if (VAR_4)
  goto err;

 VAR_6 = VAR_2;
 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
  FUNC_2(VAR_0);

  VAR_4 = FUNC_3(VAR_3->spi, &VAR_6, sizeof(VAR_6));
  if (VAR_4)
   goto err;
 }

err:
 FUNC_0(VAR_3->dev, "LEDs recount is finished\n");

 if (VAR_4)
  FUNC_1(VAR_3->dev, "with error %d", VAR_4);

 return VAR_4;
}

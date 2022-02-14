
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct artpec6_crypto {int dma_cache; int timer; int task; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct artpec6_crypto*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,struct artpec6_crypto*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 struct artpec6_crypto* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 struct artpec6_crypto *VAR_4 = FUNC_9(VAR_3);
 int VAR_5 = FUNC_10(VAR_3, 0);

 FUNC_4(VAR_2, FUNC_0(VAR_2));
 FUNC_5(VAR_1, FUNC_0(VAR_1));
 FUNC_3(VAR_0, FUNC_0(VAR_0));

 FUNC_11(&VAR_4->task);
 FUNC_7(&VAR_3->dev, VAR_5, VAR_4);
 FUNC_12(&VAR_4->task);
 FUNC_6(&VAR_4->timer);

 FUNC_1(VAR_4);

 FUNC_8(VAR_4->dma_cache);



 return 0;
}

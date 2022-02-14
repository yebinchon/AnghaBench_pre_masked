
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amba_id {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct amba_device {int dev; int * irq; TYPE_1__ res; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static int FUNC_11(struct amba_device *VAR_8, const struct amba_id *VAR_9)
{
 int VAR_10;

 VAR_5 = FUNC_6(VAR_8->res.start, FUNC_9(&VAR_8->res));
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 FUNC_10(0, VAR_5 + FUNC_3(VAR_3));

 VAR_7 = VAR_8->irq[0];
 VAR_10 = FUNC_8(VAR_7, VAR_6, 0, FUNC_5(&VAR_8->dev), ((void*)0));
 if (VAR_10 < 0)
  goto err;


 FUNC_10(FUNC_0(VAR_0),
         VAR_5 + FUNC_4(VAR_3));
 FUNC_10(FUNC_0(VAR_4),
         VAR_5 + FUNC_1(VAR_3));
 FUNC_10(FUNC_0(VAR_4) | FUNC_0(VAR_0),
         VAR_5 + FUNC_2(VAR_3));


 FUNC_10(FUNC_0(VAR_4),
         VAR_5 + FUNC_4(VAR_2));
 FUNC_10(FUNC_0(VAR_0),
         VAR_5 + FUNC_1(VAR_2));
 FUNC_10(FUNC_0(VAR_4) | FUNC_0(VAR_0),
         VAR_5 + FUNC_2(VAR_2));

 return 0;
err:
 FUNC_7(VAR_5);
 return VAR_10;
}

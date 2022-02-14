
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pca954x {int irq; TYPE_1__* chip; int lock; struct i2c_client* client; } ;
struct i2c_mux_core {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct i2c_client {scalar_t__ irq; TYPE_2__ dev; } ;
struct TYPE_3__ {int nchans; int has_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_2 ;
 struct pca954x* FUNC_1 (struct i2c_mux_core*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int *,struct pca954x*) ;
 int VAR_3 ;
 int FUNC_4 (int,int *,int ) ;
 int FUNC_5 (int,struct pca954x*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_mux_core *VAR_5)
{
 struct pca954x *VAR_6 = FUNC_1(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8, VAR_9;

 if (!VAR_6->chip->has_irq || VAR_7->irq <= 0)
  return 0;

 FUNC_6(&VAR_6->lock);

 VAR_6->irq = FUNC_3(VAR_7->dev.of_node,
       VAR_6->chip->nchans,
       &VAR_3, VAR_6);
 if (!VAR_6->irq)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_6->chip->nchans; VAR_8++) {
  VAR_9 = FUNC_2(VAR_6->irq, VAR_8);
  if (!VAR_9) {
   FUNC_0(&VAR_7->dev, "failed irq create map\n");
   return -VAR_0;
  }
  FUNC_5(VAR_9, VAR_6);
  FUNC_4(VAR_9, &VAR_4,
   VAR_2);
 }

 return 0;
}

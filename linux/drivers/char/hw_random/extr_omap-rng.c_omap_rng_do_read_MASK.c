
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_rng_dev {TYPE_1__* pdata; scalar_t__ base; } ;
struct hwrng {scalar_t__ priv; } ;
struct TYPE_2__ {size_t data_size; int (* data_present ) (struct omap_rng_dev*) ;scalar_t__* regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,scalar_t__,size_t) ;
 int FUNC_1 (struct omap_rng_dev*,size_t,int ) ;
 int FUNC_2 (struct omap_rng_dev*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hwrng *VAR_3, void *VAR_4, size_t VAR_5,
       bool VAR_6)
{
 struct omap_rng_dev *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = (struct omap_rng_dev *)VAR_3->priv;

 if (VAR_5 < VAR_7->pdata->data_size)
  return 0;

 for (VAR_8 = 0; VAR_8 < 20; VAR_8++) {
  VAR_9 = VAR_7->pdata->data_present(VAR_7);
  if (VAR_9 || !VAR_6)
   break;

  FUNC_3(10);
 }
 if (!VAR_9)
  return 0;

 FUNC_0(VAR_4, VAR_7->base + VAR_7->pdata->regs[VAR_1],
        VAR_7->pdata->data_size);

 if (VAR_7->pdata->regs[VAR_0])
  FUNC_1(VAR_7, VAR_0, VAR_2);

 return VAR_7->pdata->data_size;
}

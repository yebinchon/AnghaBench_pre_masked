
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbi_range {int spi_start; int nr_spis; int bm; } ;
struct irq_domain {int dummy; } ;
struct TYPE_2__ {int desc; } ;
typedef TYPE_1__ msi_alloc_info_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct irq_domain*,unsigned int,unsigned int) ;
 int FUNC_4 (struct irq_domain*,unsigned int,int,int *,struct mbi_range*) ;
 int FUNC_5 (struct mbi_range*,int,unsigned int) ;
 int VAR_2 ;
 int FUNC_6 (struct irq_domain*,unsigned int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct mbi_range* VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct irq_domain *VAR_7, unsigned int VAR_8,
       unsigned int VAR_9, void *VAR_10)
{
 msi_alloc_info_t *VAR_11 = VAR_10;
 struct mbi_range *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;

 FUNC_7(&VAR_3);
 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_14 = FUNC_0(VAR_6[VAR_15].bm,
       VAR_6[VAR_15].nr_spis,
       FUNC_1(VAR_9));
  if (VAR_14 >= 0) {
   VAR_12 = &VAR_6[VAR_15];
   break;
  }
 }
 FUNC_8(&VAR_3);

 if (!VAR_12)
  return -VAR_0;

 VAR_13 = VAR_12->spi_start + VAR_14;

 VAR_16 = FUNC_2(VAR_11->desc,
        VAR_4 + VAR_1);
 if (VAR_16)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_16 = FUNC_6(VAR_7, VAR_8 + VAR_15, VAR_13 + VAR_15);
  if (VAR_16)
   goto fail;

  FUNC_4(VAR_7, VAR_8 + VAR_15, VAR_13 + VAR_15,
           &VAR_2, VAR_12);
 }

 return 0;

fail:
 FUNC_3(VAR_7, VAR_8, VAR_9);
 FUNC_5(VAR_12, VAR_13, VAR_9);
 return VAR_16;
}

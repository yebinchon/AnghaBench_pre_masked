
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct fwnode_handle {int dummy; } ;
struct exiu_irq_data {scalar_t__ base; int spi_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct exiu_irq_data* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct fwnode_handle const*,char*,int *,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct exiu_irq_data*) ;
 struct exiu_irq_data* FUNC_4 (int,int ) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static struct exiu_irq_data *FUNC_7(const struct fwnode_handle *VAR_5,
           struct resource *VAR_6)
{
 struct exiu_irq_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return FUNC_0(-VAR_3);

 if (FUNC_1(VAR_5, "socionext,spi-base",
        &VAR_7->spi_base, 1)) {
  VAR_8 = -VAR_2;
  goto out_free;
 }

 VAR_7->base = FUNC_2(VAR_6->start, FUNC_5(VAR_6));
 if (!VAR_7->base) {
  VAR_8 = -VAR_2;
  goto out_free;
 }


 FUNC_6(0xFFFFFFFF, VAR_7->base + VAR_1);
 FUNC_6(0xFFFFFFFF, VAR_7->base + VAR_0);

 return VAR_7;

out_free:
 FUNC_3(VAR_7);
 return FUNC_0(VAR_8);
}

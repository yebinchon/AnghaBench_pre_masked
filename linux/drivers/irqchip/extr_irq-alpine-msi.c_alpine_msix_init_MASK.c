
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device_node {int dummy; } ;
struct alpine_msix_data {int addr; struct alpine_msix_data* msi_map; int spi_first; int num_spis; int msi_map_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (struct alpine_msix_data*,struct device_node*) ;
 struct alpine_msix_data* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct alpine_msix_data*) ;
 struct alpine_msix_data* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device_node*,int ,struct resource*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int *) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct device_node *VAR_4,
       struct device_node *VAR_5)
{
 struct alpine_msix_data *VAR_6;
 struct resource VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 FUNC_10(&VAR_6->msi_map_lock);

 VAR_8 = FUNC_6(VAR_4, 0, &VAR_7);
 if (VAR_8) {
  FUNC_9("Failed to allocate resource\n");
  goto err_priv;
 }
 VAR_6->addr = VAR_7.start & FUNC_1(63,20);
 VAR_6->addr |= VAR_0;

 if (FUNC_7(VAR_4, "al,msi-base-spi", &VAR_6->spi_first)) {
  FUNC_9("Unable to parse MSI base\n");
  VAR_8 = -VAR_1;
  goto err_priv;
 }

 if (FUNC_7(VAR_4, "al,msi-num-spis", &VAR_6->num_spis)) {
  FUNC_9("Unable to parse MSI numbers\n");
  VAR_8 = -VAR_1;
  goto err_priv;
 }

 VAR_6->msi_map = FUNC_3(FUNC_0(VAR_6->num_spis),
    sizeof(*VAR_6->msi_map),
    VAR_3);
 if (!VAR_6->msi_map) {
  VAR_8 = -VAR_2;
  goto err_priv;
 }

 FUNC_8("Registering %d msixs, starting at %d\n",
   VAR_6->num_spis, VAR_6->spi_first);

 VAR_8 = FUNC_2(VAR_6, VAR_4);
 if (VAR_8)
  goto err_map;

 return 0;

err_map:
 FUNC_4(VAR_6->msi_map);
err_priv:
 FUNC_4(VAR_6);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alpine_msix_data {int num_spis; int spi_first; int msi_map_lock; int msi_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct alpine_msix_data *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_1->msi_map_lock);

 VAR_3 = FUNC_0(VAR_1->msi_map, VAR_1->num_spis, 0,
        VAR_2, 0);
 if (VAR_3 >= VAR_1->num_spis) {
  FUNC_3(&VAR_1->msi_map_lock);
  return -VAR_0;
 }

 FUNC_1(VAR_1->msi_map, VAR_3, VAR_2);

 FUNC_3(&VAR_1->msi_map_lock);

 return VAR_1->spi_first + VAR_3;
}

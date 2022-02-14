
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alpine_msix_data {unsigned int spi_first; int msi_map_lock; int msi_map; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct alpine_msix_data *VAR_0, unsigned VAR_1,
     int VAR_2)
{
 int VAR_3 = VAR_1 - VAR_0->spi_first;

 FUNC_1(&VAR_0->msi_map_lock);

 FUNC_0(VAR_0->msi_map, VAR_3, VAR_2);

 FUNC_2(&VAR_0->msi_map_lock);
}

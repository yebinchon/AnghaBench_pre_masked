
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_gicp_spi_range {int count; int start; } ;
struct mvebu_gicp {int spi_ranges_cnt; struct mvebu_gicp_spi_range* spi_ranges; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mvebu_gicp *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->spi_ranges_cnt; VAR_3++) {
  struct mvebu_gicp_spi_range *VAR_4 = &VAR_1->spi_ranges[VAR_3];

  if (VAR_2 < VAR_4->count)
   return VAR_4->start + VAR_2;

  VAR_2 -= VAR_4->count;
 }

 return -VAR_0;
}

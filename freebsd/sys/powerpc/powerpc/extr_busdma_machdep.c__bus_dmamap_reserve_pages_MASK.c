
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(bus_dma_tag_t VAR_6, bus_dmamap_t VAR_7, int VAR_8)
{


 FUNC_1(&VAR_3);
 if (VAR_8 & VAR_0) {
  if (FUNC_3(VAR_6, VAR_7, 0) != 0) {
   FUNC_2(&VAR_3);
   return (VAR_2);
  }
 } else {
  if (FUNC_3(VAR_6, VAR_7, 1) != 0) {

   FUNC_0(&VAR_4,
       VAR_7, VAR_5);
   FUNC_2(&VAR_3);
   return (VAR_1);
  }
 }
 FUNC_2(&VAR_3);

 return (0);
}

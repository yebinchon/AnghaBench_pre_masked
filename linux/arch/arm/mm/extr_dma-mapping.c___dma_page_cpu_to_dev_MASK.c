
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (struct page*,unsigned long,size_t,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_2, unsigned long VAR_3,
 size_t VAR_4, enum dma_data_direction VAR_5)
{
 phys_addr_t VAR_6;

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1);

 VAR_6 = FUNC_3(VAR_2) + VAR_3;
 if (VAR_5 == VAR_0) {
  FUNC_2(VAR_6, VAR_6 + VAR_4);
 } else {
  FUNC_1(VAR_6, VAR_6 + VAR_4);
 }

}

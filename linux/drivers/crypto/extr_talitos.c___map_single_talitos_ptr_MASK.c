
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int dummy; } ;
struct talitos_private {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 struct talitos_private* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,void*,unsigned int,int,unsigned long) ;
 int FUNC_2 (struct talitos_private*) ;
 int FUNC_3 (struct talitos_ptr*,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0,
         struct talitos_ptr *VAR_1,
         unsigned int VAR_2, void *VAR_3,
         enum dma_data_direction VAR_4,
         unsigned long VAR_5)
{
 dma_addr_t VAR_6 = FUNC_1(VAR_0, VAR_3, VAR_2, VAR_4, VAR_5);
 struct talitos_private *VAR_7 = FUNC_0(VAR_0);
 bool VAR_8 = FUNC_2(VAR_7);

 FUNC_3(VAR_1, VAR_6, VAR_2, VAR_8);
}

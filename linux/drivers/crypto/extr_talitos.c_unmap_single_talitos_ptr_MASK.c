
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int ptr; } ;
struct talitos_private {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,int ,int) ;
 int FUNC_3 (struct talitos_ptr*,int) ;
 int FUNC_4 (struct talitos_private*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0,
         struct talitos_ptr *VAR_1,
         enum dma_data_direction VAR_2)
{
 struct talitos_private *VAR_3 = FUNC_1(VAR_0);
 bool VAR_4 = FUNC_4(VAR_3);

 FUNC_2(VAR_0, FUNC_0(VAR_1->ptr),
    FUNC_3(VAR_1, VAR_4), VAR_2);
}

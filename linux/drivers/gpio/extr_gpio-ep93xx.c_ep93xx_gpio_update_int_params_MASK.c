
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_gpio {scalar_t__ base; } ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ep93xx_gpio *VAR_7, unsigned VAR_8)
{
 FUNC_0(VAR_8 > 2);

 FUNC_2(0, VAR_7->base + VAR_4[VAR_8]);

 FUNC_2(VAR_2[VAR_8],
         VAR_7->base + VAR_6[VAR_8]);

 FUNC_2(VAR_1[VAR_8],
         VAR_7->base + VAR_5[VAR_8]);

 FUNC_1(VAR_3[VAR_8] & VAR_0[VAR_8],
        VAR_7->base + VAR_4[VAR_8]);
}

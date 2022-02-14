
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etb_drvdata {int buffer_depth; int trigger_cntr; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct etb_drvdata *VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 FUNC_1(VAR_9->base);

 VAR_11 = VAR_9->buffer_depth;

 FUNC_2(0x0, VAR_9->base + VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  FUNC_2(0x0, VAR_9->base + VAR_7);


 FUNC_2(0x0, VAR_9->base + VAR_6);

 FUNC_2(0x0, VAR_9->base + VAR_5);

 FUNC_2(VAR_9->trigger_cntr, VAR_9->base + VAR_8);
 FUNC_2(VAR_3 | VAR_4,
         VAR_9->base + VAR_2);

 FUNC_2(VAR_0, VAR_9->base + VAR_1);

 FUNC_0(VAR_9->base);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq {int clock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cmdq *VAR_4)
{
 int VAR_5;

 FUNC_0(FUNC_2(VAR_4->clock) < 0);
 FUNC_3(VAR_2, VAR_4->base + VAR_3);
 for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
  FUNC_3(VAR_5, VAR_4->base + VAR_1);
 FUNC_1(VAR_4->clock);
}

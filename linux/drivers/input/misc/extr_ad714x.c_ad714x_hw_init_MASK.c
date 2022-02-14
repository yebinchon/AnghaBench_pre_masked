
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad714x_chip {unsigned short l_state; int (* read ) (struct ad714x_chip*,int,unsigned short*,int) ;int (* write ) (struct ad714x_chip*,int,int) ;TYPE_1__* hw; } ;
struct TYPE_2__ {int** stage_cfg_reg; int* sys_cfg_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ad714x_chip*,unsigned short,int) ;
 int FUNC_1 (struct ad714x_chip*,int,int) ;
 int FUNC_2 (struct ad714x_chip*,int,unsigned short*,int) ;
 int FUNC_3 (struct ad714x_chip*,int,int) ;
 int FUNC_4 (struct ad714x_chip*,int,unsigned short*,int) ;

__attribute__((used)) static void FUNC_5(struct ad714x_chip *VAR_7)
{
 int VAR_8, VAR_9;
 unsigned short VAR_10;
 unsigned short VAR_11;



 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_10 = VAR_0 + VAR_8 * VAR_3;
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   VAR_7->write(VAR_7, VAR_10 + VAR_9,
     VAR_7->hw->stage_cfg_reg[VAR_8][VAR_9]);
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_7->write(VAR_7, VAR_2 + VAR_8,
   VAR_7->hw->sys_cfg_reg[VAR_8]);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_7->read(VAR_7, VAR_2 + VAR_8, &VAR_11, 1);

 VAR_7->write(VAR_7, VAR_1, 0xFFF);


 VAR_7->read(VAR_7, VAR_5, &VAR_7->l_state, 3);
}

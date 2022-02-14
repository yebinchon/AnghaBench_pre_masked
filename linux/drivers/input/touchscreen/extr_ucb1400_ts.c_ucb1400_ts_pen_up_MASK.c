
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int ac97; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ucb1400_ts *VAR_3)
{
 unsigned short VAR_4 = FUNC_0(VAR_3->ac97, VAR_0);

 return VAR_4 & (VAR_2 | VAR_1);
}

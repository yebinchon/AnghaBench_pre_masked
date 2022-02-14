
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int*** VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_6, int *VAR_7)
{
 unsigned int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_9 = FUNC_0(VAR_8, VAR_4) ? VAR_2 : VAR_0;
  *VAR_7 &= VAR_5[VAR_6][VAR_8][VAR_1];
  *VAR_7 |= VAR_5[VAR_6][VAR_8][VAR_9];
 }
}

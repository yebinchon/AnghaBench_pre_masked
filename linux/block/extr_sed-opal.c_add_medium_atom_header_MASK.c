
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_dev {int* cmd; int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct opal_dev *VAR_4, bool VAR_5,
       bool VAR_6, int VAR_7)
{
 u8 VAR_8;

 VAR_8 = VAR_1;
 VAR_8 |= VAR_5 ? VAR_0 : 0;
 VAR_8 |= VAR_6 ? VAR_3 : 0;
 VAR_8 |= (VAR_7 >> 8) & VAR_2;

 VAR_4->cmd[VAR_4->pos++] = VAR_8;
 VAR_4->cmd[VAR_4->pos++] = VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_dev {int pos; int * cmd; } ;


 int FUNC_0 (int*,struct opal_dev*,int) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, struct opal_dev *VAR_1, u8 VAR_2)
{
 if (!FUNC_0(VAR_0, VAR_1, 1))
  return;

 VAR_1->cmd[VAR_1->pos++] = VAR_2;
}

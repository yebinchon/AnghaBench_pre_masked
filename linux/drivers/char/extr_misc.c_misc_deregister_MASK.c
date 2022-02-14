
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miscdevice {int minor; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct miscdevice *VAR_5)
{
 int VAR_6 = VAR_0 - VAR_5->minor - 1;

 if (FUNC_1(FUNC_5(&VAR_5->list)))
  return;

 FUNC_6(&VAR_4);
 FUNC_4(&VAR_5->list);
 FUNC_3(VAR_2, FUNC_0(VAR_1, VAR_5->minor));
 if (VAR_6 < VAR_0 && VAR_6 >= 0)
  FUNC_2(VAR_6, VAR_3);
 FUNC_7(&VAR_4);
}

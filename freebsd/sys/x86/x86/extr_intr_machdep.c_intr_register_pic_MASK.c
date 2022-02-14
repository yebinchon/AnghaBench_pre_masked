
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pic*,int ) ;
 scalar_t__ FUNC_1 (struct pic*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

int
FUNC_4(struct pic *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_1);
 if (FUNC_1(VAR_3))
  VAR_4 = VAR_0;
 else {
  FUNC_0(&VAR_2, VAR_3, VAR_2);
  VAR_4 = 0;
 }
 FUNC_3(&VAR_1);
 return (VAR_4);
}

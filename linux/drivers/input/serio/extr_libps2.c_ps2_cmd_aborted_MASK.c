
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int flags; int nak; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct ps2dev *VAR_3)
{
 if (VAR_3->flags & VAR_0)
  VAR_3->nak = 1;

 if (VAR_3->flags & (VAR_0 | VAR_1))
  FUNC_0(&VAR_3->wait);


 VAR_3->flags &= VAR_2;
}

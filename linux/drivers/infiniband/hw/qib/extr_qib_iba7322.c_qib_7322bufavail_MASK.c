
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int flags; int * int_counter; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct qib_devdata *VAR_8 = VAR_7;

 if ((VAR_8->flags & (VAR_4 | VAR_1)) != VAR_4)






  return VAR_0;

 FUNC_3(*VAR_8->int_counter);


 FUNC_2(VAR_8, VAR_5, VAR_3);


 if (VAR_8->flags & VAR_2)
  FUNC_0(VAR_8);
 else
  FUNC_1(VAR_8, 0);

 return VAR_0;
}

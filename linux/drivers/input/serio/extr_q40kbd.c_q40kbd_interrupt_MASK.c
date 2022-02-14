
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q40kbd {int lock; int port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct q40kbd *VAR_7 = VAR_6;
 unsigned long VAR_8;

 FUNC_3(&VAR_7->lock, VAR_8);

 if (VAR_4 & FUNC_0(VAR_0))
  FUNC_2(VAR_7->port, FUNC_0(VAR_3), 0);

 FUNC_1(-1, VAR_2);

 FUNC_4(&VAR_7->lock, VAR_8);

 return VAR_1;
}

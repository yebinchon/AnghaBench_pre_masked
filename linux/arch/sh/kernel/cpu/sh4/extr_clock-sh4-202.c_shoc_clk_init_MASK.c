
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {TYPE_2__* parent; TYPE_1__* ops; } ;
struct TYPE_4__ {int rate; } ;
struct TYPE_3__ {scalar_t__ (* set_rate ) (struct clk*,int) ;} ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 scalar_t__ FUNC_2 (struct clk*,int) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  int VAR_3 = VAR_0[VAR_2];

  if (VAR_1->ops->set_rate(VAR_1, VAR_1->parent->rate / VAR_3) == 0)
   break;
 }

 FUNC_1(VAR_2 == FUNC_0(VAR_0));
}

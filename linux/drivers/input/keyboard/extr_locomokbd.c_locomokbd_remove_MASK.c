
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomokbd {int input; int timer; } ;
struct locomo_dev {int length; scalar_t__ mapbase; int * irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct locomokbd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct locomokbd*) ;
 struct locomokbd* FUNC_4 (struct locomo_dev*) ;
 int FUNC_5 (struct locomo_dev*,int *) ;
 int FUNC_6 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_7(struct locomo_dev *VAR_0)
{
 struct locomokbd *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(VAR_0->irq[0], VAR_1);

 FUNC_0(&VAR_1->timer);

 FUNC_2(VAR_1->input);
 FUNC_5(VAR_0, ((void*)0));

 FUNC_6((unsigned long) VAR_0->mapbase, VAR_0->length);

 FUNC_3(VAR_1);

 return 0;
}

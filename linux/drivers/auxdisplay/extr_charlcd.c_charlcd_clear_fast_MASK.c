
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charlcd {int hwidth; TYPE_1__* ops; int height; } ;
struct TYPE_2__ {int (* write_data ) (struct charlcd*,char) ;int (* clear_fast ) (struct charlcd*) ;} ;


 int FUNC_0 (struct charlcd*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct charlcd*) ;
 int FUNC_3 (struct charlcd*,char) ;

__attribute__((used)) static void FUNC_4(struct charlcd *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 if (VAR_0->ops->clear_fast)
  VAR_0->ops->clear_fast(VAR_0);
 else
  for (VAR_1 = 0; VAR_1 < FUNC_1(2, VAR_0->height) * VAR_0->hwidth; VAR_1++)
   VAR_0->ops->write_data(VAR_0, ' ');

 FUNC_0(VAR_0);
}

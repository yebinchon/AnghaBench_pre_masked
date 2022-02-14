
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {int td_cnt; int pending; scalar_t__* td; } ;
struct admhcd {int dummy; } ;


 int FUNC_0 (struct urb_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct admhcd*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct admhcd *VAR_0, struct urb_priv *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->td_cnt; VAR_2++)
  if (VAR_1->td[VAR_2])
   FUNC_2(VAR_0, VAR_1->td[VAR_2]);

 FUNC_1(&VAR_1->pending);
 FUNC_0(VAR_1);
}

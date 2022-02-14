
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {int td_cnt; int pending; int ** td; } ;
struct td {int dummy; } ;
struct admhcd {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct urb_priv* FUNC_1 (int,int ) ;
 int * FUNC_2 (struct admhcd*,int ) ;
 int FUNC_3 (struct admhcd*,struct urb_priv*) ;

__attribute__((used)) static struct urb_priv *FUNC_4(struct admhcd *VAR_0, int VAR_1,
  gfp_t VAR_2)
{
 struct urb_priv *VAR_3;


 VAR_3 = FUNC_1(sizeof(*VAR_3) + sizeof(struct td) * VAR_1, VAR_2);
 if (!VAR_3)
  goto err;


 for (VAR_3->td_cnt = 0; VAR_3->td_cnt < VAR_1; VAR_3->td_cnt++) {
  VAR_3->td[VAR_3->td_cnt] = FUNC_2(VAR_0, VAR_2);
  if (VAR_3->td[VAR_3->td_cnt] == ((void*)0))
   goto err_free;
 }

 FUNC_0(&VAR_3->pending);

 return VAR_3;

err_free:
 FUNC_3(VAR_0, VAR_3);
err:
 return ((void*)0);
}

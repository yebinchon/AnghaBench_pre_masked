
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int dummy; } ;
struct ipoib_ah {int ah; int ref; scalar_t__ last_send; struct ipoib_dev_priv* priv; } ;
struct ib_pd {int dummy; } ;
struct ib_ah_attr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ib_pd*,struct ib_ah_attr*) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int ) ;
 int FUNC_3 (struct ipoib_ah*) ;
 struct ipoib_ah* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct ipoib_ah *FUNC_6(struct ipoib_dev_priv *VAR_1,
     struct ib_pd *VAR_2, struct ib_ah_attr *VAR_3)
{
 struct ipoib_ah *VAR_4;

 VAR_4 = FUNC_4(sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->priv = VAR_1;
 VAR_4->last_send = 0;
 FUNC_5(&VAR_4->ref);

 VAR_4->ah = FUNC_1(VAR_2, VAR_3);
 if (FUNC_0(VAR_4->ah)) {
  FUNC_3(VAR_4);
  VAR_4 = ((void*)0);
 } else
  FUNC_2(VAR_1, "Created ah %p\n", VAR_4->ah);

 return VAR_4;
}

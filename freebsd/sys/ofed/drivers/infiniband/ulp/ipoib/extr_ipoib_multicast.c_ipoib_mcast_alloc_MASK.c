
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_mcast {int backoff; int pkt_queue; int list; int created; struct ipoib_dev_priv* priv; } ;
struct ipoib_dev_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 struct ipoib_mcast* FUNC_2 (int,int ) ;

__attribute__((used)) static struct ipoib_mcast *FUNC_3(struct ipoib_dev_priv *VAR_3,
          int VAR_4)
{
 struct ipoib_mcast *VAR_5;

 VAR_5 = FUNC_2(sizeof *VAR_5, VAR_4 ? VAR_1 : VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->priv = VAR_3;
 VAR_5->created = VAR_2;
 VAR_5->backoff = 1;

 FUNC_0(&VAR_5->list);
 FUNC_1(&VAR_5->pkt_queue, sizeof(VAR_5->pkt_queue));

 return VAR_5;
}

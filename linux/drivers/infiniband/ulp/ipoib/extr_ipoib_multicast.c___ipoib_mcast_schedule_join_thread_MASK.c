
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_mcast {int backoff; scalar_t__ delay_until; } ;
struct ipoib_dev_priv {int mcast_task; int wq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ipoib_dev_priv *VAR_4,
            struct ipoib_mcast *VAR_5,
            bool VAR_6)
{
 if (!FUNC_2(VAR_1, &VAR_4->flags))
  return;





 FUNC_0(&VAR_4->mcast_task);
 if (VAR_5 && VAR_6) {



  VAR_5->backoff *= 2;
  if (VAR_5->backoff > VAR_2)
   VAR_5->backoff = VAR_2;
  VAR_5->delay_until = VAR_3 + (VAR_5->backoff * VAR_0);







  FUNC_1(VAR_4->wq, &VAR_4->mcast_task, 0);
 } else if (VAR_6) {





  FUNC_1(VAR_4->wq, &VAR_4->mcast_task, VAR_0);
 } else
  FUNC_1(VAR_4->wq, &VAR_4->mcast_task, 0);
}

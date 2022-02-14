
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_queue {scalar_t__ qlen; scalar_t__ max_qlen; int list; int * backlog; } ;
struct crypto_async_request {int flags; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct crypto_queue *VAR_4,
      struct crypto_async_request *VAR_5)
{
 int VAR_6 = -VAR_2;

 if (FUNC_1(VAR_4->qlen >= VAR_4->max_qlen)) {
  if (!(VAR_5->flags & VAR_0)) {
   VAR_6 = -VAR_3;
   goto out;
  }
  VAR_6 = -VAR_1;
  if (VAR_4->backlog == &VAR_4->list)
   VAR_4->backlog = &VAR_5->list;
 }

 VAR_4->qlen++;
 FUNC_0(&VAR_5->list, &VAR_4->list);

out:
 return VAR_6;
}

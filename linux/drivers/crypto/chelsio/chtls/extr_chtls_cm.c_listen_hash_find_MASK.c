
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct listen_info {int stid; struct sock* sk; struct listen_info* next; } ;
struct chtls_dev {int listen_lock; struct listen_info** listen_hash_tab; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct chtls_dev *VAR_0,
       struct sock *VAR_1)
{
 struct listen_info *VAR_2;
 int VAR_3 = -1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 FUNC_1(&VAR_0->listen_lock);
 for (VAR_2 = VAR_0->listen_hash_tab[VAR_4]; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->sk == VAR_1) {
   VAR_3 = VAR_2->stid;
   break;
  }
 FUNC_2(&VAR_0->listen_lock);
 return VAR_3;
}

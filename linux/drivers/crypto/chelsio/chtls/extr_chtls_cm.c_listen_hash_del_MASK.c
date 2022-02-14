
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct listen_info {int stid; struct listen_info* next; struct sock* sk; } ;
struct chtls_dev {int listen_lock; struct listen_info** listen_hash_tab; } ;


 int FUNC_0 (struct listen_info*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct chtls_dev *VAR_0,
      struct sock *VAR_1)
{
 struct listen_info *VAR_2, **VAR_3;
 int VAR_4 = -1;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 VAR_3 = &VAR_0->listen_hash_tab[VAR_5];

 FUNC_2(&VAR_0->listen_lock);
 for (VAR_2 = *VAR_3; VAR_2; VAR_3 = &VAR_2->next, VAR_2 = VAR_2->next)
  if (VAR_2->sk == VAR_1) {
   VAR_4 = VAR_2->stid;
   *VAR_3 = VAR_2->next;
   FUNC_0(VAR_2);
   break;
  }
 FUNC_3(&VAR_0->listen_lock);
 return VAR_4;
}

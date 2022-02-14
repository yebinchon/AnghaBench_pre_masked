
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct listen_info {unsigned int stid; struct listen_info* next; struct sock* sk; } ;
struct chtls_dev {int listen_lock; struct listen_info** listen_hash_tab; } ;


 int VAR_0 ;
 struct listen_info* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct listen_info *FUNC_4(struct chtls_dev *VAR_1,
        struct sock *VAR_2,
        unsigned int VAR_3)
{
 struct listen_info *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);

 if (VAR_4) {
  int VAR_5 = FUNC_1(VAR_2);

  VAR_4->sk = VAR_2;
  VAR_4->stid = VAR_3;
  FUNC_2(&VAR_1->listen_lock);
  VAR_4->next = VAR_1->listen_hash_tab[VAR_5];
  VAR_1->listen_hash_tab[VAR_5] = VAR_4;
  FUNC_3(&VAR_1->listen_lock);
 }
 return VAR_4;
}

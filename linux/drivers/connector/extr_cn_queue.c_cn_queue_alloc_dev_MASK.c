
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct cn_queue_dev {struct sock* nls; int queue_lock; int queue_list; int refcnt; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct cn_queue_dev* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,char*,char const*) ;
 int FUNC_4 (int *) ;

struct cn_queue_dev *FUNC_5(const char *VAR_1, struct sock *VAR_2)
{
 struct cn_queue_dev *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(VAR_3->name, sizeof(VAR_3->name), "%s", VAR_1);
 FUNC_1(&VAR_3->refcnt, 0);
 FUNC_0(&VAR_3->queue_list);
 FUNC_4(&VAR_3->queue_lock);

 VAR_3->nls = VAR_2;

 return VAR_3;
}

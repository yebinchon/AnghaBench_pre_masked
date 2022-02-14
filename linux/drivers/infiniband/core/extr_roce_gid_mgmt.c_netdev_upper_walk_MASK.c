
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upper_list {struct net_device* upper; int list; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct upper_list* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, void *VAR_2)
{
 struct upper_list *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 struct list_head *VAR_4 = VAR_2;

 if (!VAR_3)
  return 0;

 FUNC_2(&VAR_3->list, VAR_4);
 FUNC_0(VAR_1);
 VAR_3->upper = VAR_1;

 return 0;
}

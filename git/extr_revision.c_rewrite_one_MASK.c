
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int commits; } ;
struct prio_queue {int member_0; } ;
struct commit {int dummy; } ;
typedef enum rewrite_result { ____Placeholder_rewrite_result } rewrite_result ;


 int FUNC_0 (struct prio_queue*) ;
 int VAR_0 ;
 int FUNC_1 (struct prio_queue*,int *) ;
 int FUNC_2 (struct rev_info*,struct commit**,struct prio_queue*) ;

__attribute__((used)) static enum rewrite_result FUNC_3(struct rev_info *VAR_1, struct commit **VAR_2)
{
 struct prio_queue VAR_3 = { VAR_0 };
 enum rewrite_result VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_3);
 FUNC_1(&VAR_3, &VAR_1->commits);
 FUNC_0(&VAR_3);
 return VAR_4;
}

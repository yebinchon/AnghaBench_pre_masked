
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct iowait {scalar_t__ priority; int list; scalar_t__ starved_cnt; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static inline void FUNC_2(bool VAR_0, struct iowait *VAR_1,
    struct list_head *VAR_2)
{






 if (VAR_0)
  VAR_1->starved_cnt = 0;
 else
  VAR_1->starved_cnt++;

 if (VAR_1->priority > 0 || !VAR_0)
  FUNC_0(&VAR_1->list, VAR_2);
 else
  FUNC_1(&VAR_1->list, VAR_2);
}

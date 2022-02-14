
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int next; } ;


 int FUNC_0 (struct list_head const*,struct list_head*,int ) ;
 int FUNC_1 (struct list_head const*) ;

__attribute__((used)) static inline void FUNC_2(const struct list_head *VAR_0,
          struct list_head *VAR_1)
{
 if (!FUNC_1(VAR_0))
  FUNC_0(VAR_0, VAR_1, VAR_1->next);
}

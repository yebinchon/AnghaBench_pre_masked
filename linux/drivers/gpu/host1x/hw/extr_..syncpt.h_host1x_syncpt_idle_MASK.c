
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_syncpt {int max_val; int min_val; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline bool FUNC_2(struct host1x_syncpt *VAR_0)
{
 int VAR_1, VAR_2;
 FUNC_1();
 VAR_1 = FUNC_0(&VAR_0->min_val);
 VAR_2 = FUNC_0(&VAR_0->max_val);
 return (VAR_1 == VAR_2);
}

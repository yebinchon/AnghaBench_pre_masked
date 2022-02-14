
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgpath {int dummy; } ;
struct multipath {scalar_t__ pg_init_retries; int lock; int flags; int pg_init_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct multipath *VAR_2, struct pgpath *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5 = 0;

 FUNC_2(&VAR_2->lock, VAR_4);

 if (FUNC_0(&VAR_2->pg_init_count) <= VAR_2->pg_init_retries &&
     !FUNC_4(VAR_0, &VAR_2->flags))
  FUNC_1(VAR_1, &VAR_2->flags);
 else
  VAR_5 = 1;

 FUNC_3(&VAR_2->lock, VAR_4);

 return VAR_5;
}

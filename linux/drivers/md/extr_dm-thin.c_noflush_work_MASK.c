
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int pool; } ;
struct noflush_work {int pw; struct thin_c* tc; } ;


 int FUNC_0 (int *,int ,void (*) (struct work_struct*)) ;

__attribute__((used)) static void FUNC_1(struct thin_c *VAR_0, void (*VAR_1)(struct work_struct *))
{
 struct noflush_work VAR_2;

 VAR_2.tc = VAR_0;
 FUNC_0(&VAR_2.pw, VAR_0->pool, VAR_1);
}

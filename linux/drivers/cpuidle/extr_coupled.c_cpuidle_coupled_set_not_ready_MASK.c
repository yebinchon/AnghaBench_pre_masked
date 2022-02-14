
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_coupled {int online_count; int ready_waiting_counts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static
inline int FUNC_1(struct cpuidle_coupled *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->online_count | (VAR_3->online_count << VAR_2);
 VAR_5 = FUNC_0(&VAR_3->ready_waiting_counts,
  -VAR_1, VAR_4);

 return VAR_5 ? 0 : -VAR_0;
}

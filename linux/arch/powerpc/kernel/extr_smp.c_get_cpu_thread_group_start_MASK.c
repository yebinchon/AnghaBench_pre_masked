
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_groups {int nr_groups; int threads_per_group; int* thread_list; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct thread_groups *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_groups; VAR_3++) {
  int VAR_5 = VAR_3 * VAR_1->threads_per_group;

  for (VAR_4 = 0; VAR_4 < VAR_1->threads_per_group; VAR_4++) {
   int VAR_6 = VAR_5 + VAR_4;

   if (VAR_1->thread_list[VAR_6] == VAR_2)
    return VAR_5;
  }
 }

 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct thread_groups {unsigned int property; int nr_groups; int threads_per_group; void** thread_list; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*,void**,int) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_2,
          struct thread_groups *VAR_3,
          unsigned int VAR_4)
{
 int VAR_5;
 u32 VAR_6[3 + VAR_1];
 u32 *VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, "ibm,thread-groups",
      VAR_6, 3);
 if (VAR_9)
  return VAR_9;

 VAR_3->property = VAR_6[0];
 VAR_3->nr_groups = VAR_6[1];
 VAR_3->threads_per_group = VAR_6[2];
 if (VAR_3->property != VAR_4 ||
     VAR_3->nr_groups < 1 ||
     VAR_3->threads_per_group < 1)
  return -VAR_0;

 VAR_8 = VAR_3->nr_groups * VAR_3->threads_per_group;

 VAR_9 = FUNC_0(VAR_2, "ibm,thread-groups",
      VAR_6,
      3 + VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7 = &VAR_6[3];

 for (VAR_5 = 0 ; VAR_5 < VAR_8; VAR_5++)
  VAR_3->thread_list[VAR_5] = VAR_7[VAR_5];

 return 0;
}

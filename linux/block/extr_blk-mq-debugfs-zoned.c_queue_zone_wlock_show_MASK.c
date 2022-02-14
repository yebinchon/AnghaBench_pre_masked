
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct request_queue {unsigned int nr_zones; int seq_zones_wlock; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

int FUNC_2(void *VAR_0, struct seq_file *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0;
 unsigned int VAR_3;

 if (!VAR_2->seq_zones_wlock)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_zones; VAR_3++)
  if (FUNC_1(VAR_3, VAR_2->seq_zones_wlock))
   FUNC_0(VAR_1, "%u\n", VAR_3);

 return 0;
}

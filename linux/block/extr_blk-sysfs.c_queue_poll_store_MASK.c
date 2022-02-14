
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {TYPE_2__* tag_set; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {size_t nr_maps; TYPE_1__* map; } ;
struct TYPE_3__ {int nr_queues; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 scalar_t__ FUNC_2 (unsigned long*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct request_queue *VAR_3, const char *VAR_4,
    size_t VAR_5)
{
 unsigned long VAR_6;
 ssize_t VAR_7;

 if (!VAR_3->tag_set || VAR_3->tag_set->nr_maps <= VAR_1 ||
     !VAR_3->tag_set->map[VAR_1].nr_queues)
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_6, VAR_4, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6)
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_0(VAR_2, VAR_3);

 return VAR_7;
}

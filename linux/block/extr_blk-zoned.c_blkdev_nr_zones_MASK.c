
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct block_device {TYPE_1__* bd_part; } ;
struct TYPE_2__ {int nr_sects; } ;


 unsigned int FUNC_0 (struct request_queue*,int ) ;
 struct request_queue* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct request_queue*) ;

unsigned int FUNC_3(struct block_device *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_2(VAR_1))
  return 0;

 return FUNC_0(VAR_1, VAR_0->bd_part->nr_sects);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int chunk_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

void FUNC_2(struct request_queue *VAR_0, unsigned int VAR_1)
{
 FUNC_0(!FUNC_1(VAR_1));
 VAR_0->limits.chunk_sectors = VAR_1;
}

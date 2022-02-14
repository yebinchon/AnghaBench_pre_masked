
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_limits {int dummy; } ;
struct mapped_device {TYPE_1__* queue; int holders; } ;
struct TYPE_2__ {struct queue_limits limits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

struct queue_limits *FUNC_2(struct mapped_device *VAR_0)
{
 FUNC_0(!FUNC_1(&VAR_0->holders));
 return &VAR_0->queue->limits;
}

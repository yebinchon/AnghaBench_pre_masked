
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {scalar_t__ max_write_same_sectors; } ;
struct mapped_device {int dummy; } ;


 struct queue_limits* FUNC_0 (struct mapped_device*) ;

void FUNC_1(struct mapped_device *VAR_0)
{
 struct queue_limits *VAR_1 = FUNC_0(VAR_0);


 VAR_1->max_write_same_sectors = 0;
}

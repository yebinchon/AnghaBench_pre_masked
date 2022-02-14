
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {scalar_t__ max_discard_sectors; } ;
struct mapped_device {int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct queue_limits* FUNC_1 (struct mapped_device*) ;

void FUNC_2(struct mapped_device *VAR_1)
{
 struct queue_limits *VAR_2 = FUNC_1(VAR_1);


 VAR_2->max_discard_sectors = 0;
 FUNC_0(VAR_0, VAR_1->queue);
}

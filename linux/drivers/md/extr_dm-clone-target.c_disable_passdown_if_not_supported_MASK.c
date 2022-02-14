
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct queue_limits {scalar_t__ max_discard_sectors; } ;
struct clone {scalar_t__ region_size; int flags; TYPE_1__* dest_dev; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {struct queue_limits limits; } ;
struct TYPE_3__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct clone *VAR_2)
{
 struct block_device *VAR_3 = VAR_2->dest_dev->bdev;
 struct queue_limits *VAR_4 = &FUNC_1(VAR_3)->limits;
 const char *VAR_5 = ((void*)0);
 char VAR_6[VAR_0];

 if (!FUNC_5(VAR_1, &VAR_2->flags))
  return;

 if (!FUNC_2(VAR_3))
  VAR_5 = "discard unsupported";
 else if (VAR_4->max_discard_sectors < VAR_2->region_size)
  VAR_5 = "max discard sectors smaller than a region";

 if (VAR_5) {
  FUNC_0("Destination device (%s) %s: Disabling discard passdown.",
         FUNC_3(VAR_3, VAR_6), VAR_5);
  FUNC_4(VAR_1, &VAR_2->flags);
 }
}

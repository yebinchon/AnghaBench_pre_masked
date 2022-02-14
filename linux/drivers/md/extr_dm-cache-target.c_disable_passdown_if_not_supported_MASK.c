
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct queue_limits {scalar_t__ max_discard_sectors; } ;
struct TYPE_5__ {int discard_passdown; } ;
struct cache {scalar_t__ sectors_per_block; TYPE_2__ features; TYPE_1__* origin_dev; } ;
struct block_device {int dummy; } ;
struct TYPE_6__ {struct queue_limits limits; } ;
struct TYPE_4__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;
 TYPE_3__* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,char*) ;
 int FUNC_3 (struct block_device*) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_1)
{
 struct block_device *VAR_2 = VAR_1->origin_dev->bdev;
 struct queue_limits *VAR_3 = &FUNC_1(VAR_2)->limits;
 const char *VAR_4 = ((void*)0);
 char VAR_5[VAR_0];

 if (!VAR_1->features.discard_passdown)
  return;

 if (!FUNC_3(VAR_2))
  VAR_4 = "discard unsupported";

 else if (VAR_3->max_discard_sectors < VAR_1->sectors_per_block)
  VAR_4 = "max discard sectors smaller than a block";

 if (VAR_4) {
  FUNC_0("Origin device (%s) %s: Disabling discard passdown.",
         FUNC_2(VAR_2, VAR_5), VAR_4);
  VAR_1->features.discard_passdown = 0;
 }
}

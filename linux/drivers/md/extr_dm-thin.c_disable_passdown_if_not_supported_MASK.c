
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct queue_limits {scalar_t__ max_discard_sectors; } ;
struct TYPE_4__ {int discard_passdown; } ;
struct pool_c {TYPE_1__ adjusted_pf; TYPE_2__* data_dev; struct pool* pool; } ;
struct pool {scalar_t__ sectors_per_block; } ;
struct block_device {int dummy; } ;
struct TYPE_6__ {struct queue_limits limits; } ;
struct TYPE_5__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;
 TYPE_3__* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,char*) ;
 int FUNC_3 (struct pool_c*) ;

__attribute__((used)) static void FUNC_4(struct pool_c *VAR_1)
{
 struct pool *VAR_2 = VAR_1->pool;
 struct block_device *VAR_3 = VAR_1->data_dev->bdev;
 struct queue_limits *VAR_4 = &FUNC_1(VAR_3)->limits;
 const char *VAR_5 = ((void*)0);
 char VAR_6[VAR_0];

 if (!VAR_1->adjusted_pf.discard_passdown)
  return;

 if (!FUNC_3(VAR_1))
  VAR_5 = "discard unsupported";

 else if (VAR_4->max_discard_sectors < VAR_2->sectors_per_block)
  VAR_5 = "max discard sectors smaller than a block";

 if (VAR_5) {
  FUNC_0("Data device (%s) %s: Disabling discard passdown.", FUNC_2(VAR_3, VAR_6), VAR_5);
  VAR_1->adjusted_pf.discard_passdown = 0;
 }
}

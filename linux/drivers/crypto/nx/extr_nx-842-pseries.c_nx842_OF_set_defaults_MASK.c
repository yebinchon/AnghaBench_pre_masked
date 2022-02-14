
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx842_devdata {scalar_t__ max_sg_len; scalar_t__ max_sync_sg; scalar_t__ max_sync_size; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct nx842_devdata *VAR_1)
{
 if (VAR_1) {
  VAR_1->max_sync_size = 0;
  VAR_1->max_sync_sg = 0;
  VAR_1->max_sg_len = 0;
  return 0;
 } else
  return -VAR_0;
}

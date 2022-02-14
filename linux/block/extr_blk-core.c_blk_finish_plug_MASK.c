
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_plug {int dummy; } ;
struct TYPE_2__ {struct blk_plug* plug; } ;


 int FUNC_0 (struct blk_plug*,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(struct blk_plug *VAR_1)
{
 if (VAR_1 != VAR_0->plug)
  return;
 FUNC_0(VAR_1, 0);

 VAR_0->plug = ((void*)0);
}

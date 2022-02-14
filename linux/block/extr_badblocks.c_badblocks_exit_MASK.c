
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct badblocks {int * page; scalar_t__ dev; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct badblocks *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->dev)
  FUNC_0(VAR_0->dev, VAR_0->page);
 else
  FUNC_1(VAR_0->page);
 VAR_0->page = ((void*)0);
}

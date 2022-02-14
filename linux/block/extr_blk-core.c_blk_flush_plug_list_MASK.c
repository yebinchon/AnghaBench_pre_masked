
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_plug {int mq_list; } ;


 int FUNC_0 (struct blk_plug*,int) ;
 int FUNC_1 (struct blk_plug*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct blk_plug *VAR_0, bool VAR_1)
{
 FUNC_1(VAR_0, VAR_1);

 if (!FUNC_2(&VAR_0->mq_list))
  FUNC_0(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tag_set {int ** tags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct blk_mq_tag_set*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_tag_set *VAR_0,
      unsigned int VAR_1)
{
 if (VAR_0->tags && VAR_0->tags[VAR_1]) {
  FUNC_1(VAR_0, VAR_0->tags[VAR_1], VAR_1);
  FUNC_0(VAR_0->tags[VAR_1]);
  VAR_0->tags[VAR_1] = ((void*)0);
 }
}

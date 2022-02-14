
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {unsigned int nr_tags; unsigned int nr_reserved_tags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct blk_mq_tags* FUNC_0 (struct blk_mq_tags*,int,int) ;
 struct blk_mq_tags* FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*) ;

struct blk_mq_tags *FUNC_3(unsigned int VAR_2,
         unsigned int VAR_3,
         int VAR_4, int VAR_5)
{
 struct blk_mq_tags *VAR_6;

 if (VAR_2 > VAR_0) {
  FUNC_2("blk-mq: tag depth too large\n");
  return ((void*)0);
 }

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1, VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->nr_tags = VAR_2;
 VAR_6->nr_reserved_tags = VAR_3;

 return FUNC_0(VAR_6, VAR_4, VAR_5);
}

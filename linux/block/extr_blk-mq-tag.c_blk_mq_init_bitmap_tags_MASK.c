
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {unsigned int nr_tags; unsigned int nr_reserved_tags; int bitmap_tags; int breserved_tags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned int,int,int) ;
 int FUNC_1 (struct blk_mq_tags*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct blk_mq_tags *FUNC_3(struct blk_mq_tags *VAR_1,
         int VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_1->nr_tags - VAR_1->nr_reserved_tags;
 bool VAR_5 = VAR_3 == VAR_0;

 if (FUNC_0(&VAR_1->bitmap_tags, VAR_4, VAR_5, VAR_2))
  goto free_tags;
 if (FUNC_0(&VAR_1->breserved_tags, VAR_1->nr_reserved_tags, VAR_5,
       VAR_2))
  goto free_bitmap_tags;

 return VAR_1;
free_bitmap_tags:
 FUNC_2(&VAR_1->bitmap_tags);
free_tags:
 FUNC_1(VAR_1);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct search {int dummy; } ;
struct btree {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,unsigned int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct bio*) ;

__attribute__((used)) static int FUNC_5(struct btree *VAR_2, struct search *VAR_3,
    struct bio *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_5, FUNC_1(VAR_4)) << 9;

 FUNC_3(VAR_4->bi_iter.bi_size, VAR_6);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4->bi_iter.bi_size, VAR_6);

 FUNC_0(VAR_4, VAR_6);

 if (!VAR_4->bi_iter.bi_size)
  return VAR_1;

 return VAR_0;
}

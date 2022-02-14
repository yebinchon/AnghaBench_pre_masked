
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio {unsigned short bi_max_vecs; struct bio_vec* bi_io_vec; int __bi_cnt; int __bi_remaining; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bio*,int ,int) ;

void FUNC_2(struct bio *VAR_0, struct bio_vec *VAR_1,
       unsigned short VAR_2)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->__bi_remaining, 1);
 FUNC_0(&VAR_0->__bi_cnt, 1);

 VAR_0->bi_io_vec = VAR_1;
 VAR_0->bi_max_vecs = VAR_2;
}

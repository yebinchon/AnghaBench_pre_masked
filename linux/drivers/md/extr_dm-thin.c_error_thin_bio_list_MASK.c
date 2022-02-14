
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; } ;
struct bio_list {int dummy; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct bio_list*,struct bio_list*) ;
 int FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct bio_list*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct thin_c *VAR_0, struct bio_list *VAR_1,
  blk_status_t VAR_2)
{
 struct bio_list VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_3);

 FUNC_3(&VAR_0->lock, VAR_4);
 FUNC_0(&VAR_3, VAR_1);
 FUNC_4(&VAR_0->lock, VAR_4);

 FUNC_2(&VAR_3, VAR_2);
}

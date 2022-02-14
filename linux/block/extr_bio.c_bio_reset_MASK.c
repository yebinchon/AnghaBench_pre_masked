
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {unsigned long bi_flags; int __bi_remaining; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ,int ) ;

void FUNC_3(struct bio *VAR_2)
{
 unsigned long VAR_3 = VAR_2->bi_flags & (~0UL << VAR_0);

 FUNC_1(VAR_2);

 FUNC_2(VAR_2, 0, VAR_1);
 VAR_2->bi_flags = VAR_3;
 FUNC_0(&VAR_2->__bi_remaining, 1);
}

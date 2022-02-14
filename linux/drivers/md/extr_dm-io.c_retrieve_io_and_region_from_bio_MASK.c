
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct bio {scalar_t__ bi_private; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bio *VAR_1, struct io **VAR_2,
           unsigned *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->bi_private;

 *VAR_2 = (void *)(VAR_4 & -(unsigned long)VAR_0);
 *VAR_3 = VAR_4 & (VAR_0 - 1);
}

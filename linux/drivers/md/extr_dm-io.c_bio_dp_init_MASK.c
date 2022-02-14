
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpages {int context_bi; int context_ptr; int next_page; int get_page; } ;
struct bio {int bi_iter; int bi_io_vec; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dpages *VAR_2, struct bio *VAR_3)
{
 VAR_2->get_page = VAR_0;
 VAR_2->next_page = VAR_1;





 VAR_2->context_ptr = VAR_3->bi_io_vec;
 VAR_2->context_bi = VAR_3->bi_iter;
}

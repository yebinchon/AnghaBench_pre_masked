
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct bio {void* bi_private; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,struct io*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1, struct io *VAR_2,
           unsigned VAR_3)
{
 if (FUNC_3(!FUNC_2((unsigned long)VAR_2, VAR_0))) {
  FUNC_1("Unaligned struct io pointer %p", VAR_2);
  FUNC_0();
 }

 VAR_1->bi_private = (void *)((unsigned long)VAR_2 | VAR_3);
}

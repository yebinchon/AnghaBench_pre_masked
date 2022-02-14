
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {int entry; } ;
struct msc {int buf_mutex; } ;


 int FUNC_0 (struct msc_iter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct msc_iter *VAR_0, struct msc *VAR_1)
{
 FUNC_2(&VAR_1->buf_mutex);
 FUNC_1(&VAR_0->entry);
 FUNC_3(&VAR_1->buf_mutex);

 FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct bio {struct bio* bi_private; } ;


 struct bio* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_2)
{
 struct bio *VAR_3, *VAR_4;

 FUNC_2(&VAR_1);
 VAR_4 = VAR_0;
 VAR_0 = ((void*)0);
 FUNC_3(&VAR_1);

 while ((VAR_3 = VAR_4) != ((void*)0)) {
  VAR_4 = VAR_3->bi_private;

  FUNC_1(VAR_3, 1);
  FUNC_0(VAR_3);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_cm_work {int list; struct siw_cep* cep; } ;
struct siw_cep {int work_freelist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct siw_cm_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct siw_cep*) ;

__attribute__((used)) static int FUNC_5(struct siw_cep *VAR_2, int VAR_3)
{
 struct siw_cm_work *VAR_4;

 while (VAR_3--) {
  VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
  if (!VAR_4) {
   if (!(FUNC_3(&VAR_2->work_freelist)))
    FUNC_4(VAR_2);
   return -VAR_0;
  }
  VAR_4->cep = VAR_2;
  FUNC_0(&VAR_4->list);
  FUNC_2(&VAR_4->list, &VAR_2->work_freelist);
 }
 return 0;
}

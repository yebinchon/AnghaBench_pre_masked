
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_cm_work {int type; int work; struct siw_cep* cep; } ;
struct siw_cep {scalar_t__ state; scalar_t__ qp; struct siw_cm_work* mpa_timer; } ;
typedef enum siw_work_type { ____Placeholder_siw_work_type } siw_work_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 int FUNC_3 (struct siw_cep*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct siw_cep*,char*,...) ;
 struct siw_cm_work* FUNC_5 (struct siw_cep*) ;

int FUNC_6(struct siw_cep *VAR_7, enum siw_work_type VAR_8)
{
 struct siw_cm_work *VAR_9 = FUNC_5(VAR_7);
 unsigned long VAR_10 = 0;

 if (!VAR_9) {
  FUNC_4(VAR_7, "failed with no work available\n");
  return -VAR_0;
 }
 VAR_9->type = VAR_8;
 VAR_9->cep = VAR_7;

 FUNC_3(VAR_7);

 FUNC_0(&VAR_9->work, VAR_5);

 if (VAR_8 == VAR_3) {
  VAR_7->mpa_timer = VAR_9;

  if (VAR_7->state == VAR_4)
   VAR_10 = VAR_2;
  else
   VAR_10 = VAR_1;
 }
 FUNC_4(VAR_7, "[QP %u]: work type: %d, timeout %lu\n",
      VAR_7->qp ? FUNC_1(VAR_7->qp) : -1, VAR_8, VAR_10);

 FUNC_2(VAR_6, &VAR_9->work, VAR_10);

 return 0;
}

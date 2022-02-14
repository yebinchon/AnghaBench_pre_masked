
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_cm_sidr_rep_param {int status; } ;
struct cm_id_private {int id; } ;
typedef enum ib_cm_sidr_status { ____Placeholder_ib_cm_sidr_status } ib_cm_sidr_status ;


 int FUNC_0 (int *,struct ib_cm_sidr_rep_param*) ;
 int FUNC_1 (struct ib_cm_sidr_rep_param*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cm_id_private *VAR_0,
          enum ib_cm_sidr_status VAR_1)
{
 struct ib_cm_sidr_rep_param VAR_2;

 FUNC_1(&VAR_2, 0, sizeof VAR_2);
 VAR_2.status = VAR_1;
 FUNC_0(&VAR_0->id, &VAR_2);
}

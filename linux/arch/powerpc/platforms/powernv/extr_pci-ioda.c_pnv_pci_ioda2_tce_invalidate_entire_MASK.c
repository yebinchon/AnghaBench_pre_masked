
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {scalar_t__ model; int opal_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct pnv_phb*,int) ;

void FUNC_2(struct pnv_phb *VAR_3, bool VAR_4)
{
 if (VAR_3->model == VAR_1 || VAR_3->model == VAR_2)
  FUNC_1(VAR_3, VAR_4);
 else
  FUNC_0(VAR_3->opal_id, VAR_0, 0, 0, 0, 0);
}

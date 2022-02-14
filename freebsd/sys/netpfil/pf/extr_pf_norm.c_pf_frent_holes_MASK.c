
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_frent {scalar_t__ fe_off; scalar_t__ fe_len; int fe_mff; } ;


 int FUNC_0 (int,char*) ;
 struct pf_frent* FUNC_1 (struct pf_frent*,int ) ;
 struct pf_frent* FUNC_2 (struct pf_frent*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct pf_frent *VAR_2)
{
 struct pf_frent *VAR_3 = FUNC_2(VAR_2, VAR_1, VAR_0);
 struct pf_frent *VAR_4 = FUNC_1(VAR_2, VAR_0);
 int VAR_5 = 1;

 if (VAR_3 == ((void*)0)) {
  if (VAR_2->fe_off == 0)
   VAR_5--;
 } else {
  FUNC_0(VAR_2->fe_off != 0, ("frent->fe_off != 0"));
  if (VAR_2->fe_off == VAR_3->fe_off + VAR_3->fe_len)
   VAR_5--;
 }
 if (VAR_4 == ((void*)0)) {
  if (!VAR_2->fe_mff)
   VAR_5--;
 } else {
  FUNC_0(VAR_2->fe_mff, ("frent->fe_mff"));
  if (VAR_4->fe_off == VAR_2->fe_off + VAR_2->fe_len)
   VAR_5--;
 }
 return VAR_5;
}

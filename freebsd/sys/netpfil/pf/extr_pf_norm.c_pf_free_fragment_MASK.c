
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_frent {int fe_m; } ;
struct pf_fragment {int fr_queue; } ;


 int FUNC_0 () ;
 struct pf_frent* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pf_frent*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pf_fragment*) ;
 int FUNC_5 (int ,struct pf_frent*) ;

__attribute__((used)) static void
FUNC_6(struct pf_fragment *VAR_2)
{
 struct pf_frent *VAR_3;

 FUNC_0();


 for (VAR_3 = FUNC_1(&VAR_2->fr_queue); VAR_3;
     VAR_3 = FUNC_1(&VAR_2->fr_queue)) {
  FUNC_2(&VAR_2->fr_queue, VAR_3, VAR_1);

  FUNC_3(VAR_3->fe_m);
  FUNC_5(VAR_0, VAR_3);
 }

 FUNC_4(VAR_2);
}

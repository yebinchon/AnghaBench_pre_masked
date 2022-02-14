
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_frent {scalar_t__ fe_off; } ;
struct pf_fragment {struct pf_frent** fr_firstoff; int fr_queue; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct pf_frent* FUNC_1 (int *,int ) ;
 struct pf_frent* FUNC_2 (struct pf_frent*,int ) ;
 struct pf_frent* FUNC_3 (struct pf_frent*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct pf_frent*) ;

struct pf_frent *
FUNC_5(struct pf_fragment *VAR_3, struct pf_frent *VAR_4)
{
 struct pf_frent *VAR_5, *VAR_6;
 int VAR_7;





 VAR_5 = FUNC_1(&VAR_3->fr_queue, VAR_2);
 FUNC_0(VAR_5 != ((void*)0), ("prev != NULL"));
 if (VAR_5->fe_off <= VAR_4->fe_off)
  return VAR_5;







 for (VAR_7 = FUNC_4(VAR_4); VAR_7 < VAR_0;
     VAR_7++) {
  VAR_5 = VAR_3->fr_firstoff[VAR_7];
  if (VAR_5 != ((void*)0))
   break;
 }
 FUNC_0(VAR_5 != ((void*)0), ("prev != NULL"));






 if (VAR_5->fe_off > VAR_4->fe_off) {
  VAR_5 = FUNC_3(VAR_5, VAR_2, VAR_1);
  if (VAR_5 == ((void*)0))
   return ((void*)0);
  FUNC_0(VAR_5->fe_off <= VAR_4->fe_off,
      ("prev->fe_off <= frent->fe_off"));
  return VAR_5;
 }




 for (VAR_6 = FUNC_2(VAR_5, VAR_1); VAR_6 != ((void*)0);
     VAR_6 = FUNC_2(VAR_6, VAR_1)) {
  if (VAR_6->fe_off > VAR_4->fe_off)
   break;
  VAR_5 = VAR_6;
 }
 return VAR_5;
}

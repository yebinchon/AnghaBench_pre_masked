
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {unsigned long numpages; int flags; unsigned long curpage; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cpa_data*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct cpa_data*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cpa_data *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = VAR_3->numpages;
 unsigned long VAR_6 = VAR_5;
 int VAR_7 = 0;

 while (VAR_6) {




  VAR_3->numpages = VAR_6;

  if (VAR_3->flags & (VAR_0 | VAR_1))
   VAR_3->numpages = 1;

  if (!FUNC_3())
   FUNC_4(&VAR_2);
  VAR_7 = FUNC_1(VAR_3, VAR_4);
  if (!FUNC_3())
   FUNC_5(&VAR_2);
  if (VAR_7)
   goto out;

  if (VAR_4) {
   VAR_7 = FUNC_2(VAR_3);
   if (VAR_7)
    goto out;
  }






  FUNC_0(VAR_3->numpages > VAR_6 || !VAR_3->numpages);
  VAR_6 -= VAR_3->numpages;
  VAR_3->curpage += VAR_3->numpages;
 }

out:

 VAR_3->numpages = VAR_5;
 return VAR_7;
}

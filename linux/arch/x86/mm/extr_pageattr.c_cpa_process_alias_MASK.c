
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {int pfn; unsigned long* vaddr; int flags; scalar_t__ curpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct cpa_data*,int ) ;
 unsigned long FUNC_1 (struct cpa_data*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int) ;
 unsigned long VAR_8 ;
 int FUNC_5 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct cpa_data *VAR_9)
{
 struct cpa_data VAR_10;
 unsigned long VAR_11 = (unsigned long)FUNC_3(VAR_9->pfn << VAR_3);
 unsigned long VAR_12;
 int VAR_13;

 if (!FUNC_4(VAR_9->pfn, VAR_9->pfn + 1))
  return 0;





 VAR_12 = FUNC_1(VAR_9, VAR_9->curpage);
 if (!(FUNC_5(VAR_12, VAR_2,
      VAR_2 + (VAR_7 << VAR_3)))) {

  VAR_10 = *VAR_9;
  VAR_10.vaddr = &VAR_11;
  VAR_10.flags &= ~(VAR_1 | VAR_0);
  VAR_10.curpage = 0;

  VAR_13 = FUNC_0(&VAR_10, 0);
  if (VAR_13)
   return VAR_13;
 }
 return 0;
}

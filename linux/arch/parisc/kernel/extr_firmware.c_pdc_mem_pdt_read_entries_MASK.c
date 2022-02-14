
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_mem_read_pdt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct pdc_mem_read_pdt*,unsigned long*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned long* VAR_6 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct pdc_mem_read_pdt *VAR_7,
  unsigned long *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;

 FUNC_5(&VAR_5, VAR_10);
 VAR_9 = FUNC_3(VAR_1, VAR_2, FUNC_1(VAR_6),
   FUNC_1(VAR_8));
 if (VAR_9 == VAR_3) {
  FUNC_2(VAR_6);
  FUNC_4(VAR_7, VAR_6, sizeof(*VAR_7));
 }
 FUNC_6(&VAR_5, VAR_10);
 return VAR_9;
}

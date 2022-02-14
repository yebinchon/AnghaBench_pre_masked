
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic {int flags; scalar_t__* err_int_vecs; int hc_err; } ;
typedef scalar_t__ irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct mpic*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct mpic *VAR_4, unsigned int VAR_5, irq_hw_number_t VAR_6)
{
 if ((VAR_4->flags & VAR_0) &&
     (VAR_6 >= VAR_4->err_int_vecs[0] &&
      VAR_6 <= VAR_4->err_int_vecs[VAR_1 - 1])) {
  FUNC_0(VAR_4->flags & VAR_2);

  FUNC_3("mpic: mapping as Error Interrupt\n");
  FUNC_2(VAR_5, VAR_4);
  FUNC_1(VAR_5, &VAR_4->hc_err,
      VAR_3);
  return 1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mm_struct*,struct slice_mask*,unsigned int) ;
 int FUNC_3 (unsigned long,unsigned long,struct slice_mask*) ;

void FUNC_4(struct mm_struct *VAR_0, unsigned long VAR_1,
      unsigned long VAR_2, unsigned int VAR_3)
{
 struct slice_mask VAR_4;

 FUNC_0(FUNC_1());

 FUNC_3(VAR_1, VAR_2, &VAR_4);
 FUNC_2(VAR_0, &VAR_4, VAR_3);
}

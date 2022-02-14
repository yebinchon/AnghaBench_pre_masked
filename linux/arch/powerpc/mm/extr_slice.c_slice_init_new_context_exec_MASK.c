
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {unsigned long low_slices; int high_slices; } ;
struct mm_struct {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned char*,unsigned int,int) ;
 unsigned char* FUNC_2 (int *) ;
 unsigned char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned int) ;
 unsigned int VAR_3 ;
 int FUNC_6 (char*,struct mm_struct*) ;
 struct slice_mask* FUNC_7 (int *,unsigned int) ;

void FUNC_8(struct mm_struct *VAR_4)
{
 unsigned char *VAR_5, *VAR_6;
 struct slice_mask *VAR_7;
 unsigned int VAR_8 = VAR_3;

 FUNC_6("slice_init_new_context_exec(mm=%p)\n", VAR_4);






 FUNC_4(&VAR_4->context, VAR_0);
 FUNC_5(&VAR_4->context, VAR_8);




 VAR_6 = FUNC_3(&VAR_4->context);
 FUNC_1(VAR_6, (VAR_8 << 4) | VAR_8, VAR_2 >> 1);

 VAR_5 = FUNC_2(&VAR_4->context);
 FUNC_1(VAR_5, (VAR_8 << 4) | VAR_8, VAR_1 >> 1);




 VAR_7 = FUNC_7(&VAR_4->context, VAR_8);
 VAR_7->low_slices = ~0UL;
 if (VAR_1)
  FUNC_0(VAR_7->high_slices, VAR_1);
}

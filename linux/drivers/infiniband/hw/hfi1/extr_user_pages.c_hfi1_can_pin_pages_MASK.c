
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct mm_struct {int pinned_vm; } ;
struct hfi1_devdata {unsigned int num_rcv_contexts; unsigned int first_dyn_alloc_ctxt; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int *) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;

bool FUNC_4(struct hfi1_devdata *VAR_4, struct mm_struct *VAR_5,
   u32 VAR_6, u32 VAR_7)
{
 unsigned long VAR_8 = FUNC_3(VAR_2), VAR_9, VAR_10,
  VAR_11 = (VAR_3 * (1UL << 20));
 unsigned int VAR_12 =
   VAR_4->num_rcv_contexts - VAR_4->first_dyn_alloc_ctxt;
 bool VAR_13 = FUNC_2(VAR_0);






 VAR_10 = (VAR_8 / VAR_12) / 4;


 if (VAR_8 != (-1UL) && VAR_11 > VAR_10)
  VAR_11 = VAR_10;


 VAR_11 = FUNC_0(VAR_11, VAR_1);

 VAR_9 = FUNC_1(&VAR_5->pinned_vm);


 if (VAR_9 + VAR_7 >= VAR_8 && !VAR_13)
  return 0;

 return ((VAR_6 + VAR_7) <= VAR_11) || VAR_13;
}

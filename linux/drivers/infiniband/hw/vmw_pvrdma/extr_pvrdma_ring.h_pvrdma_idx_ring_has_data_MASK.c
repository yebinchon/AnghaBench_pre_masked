
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvrdma_ring {int cons_head; int prod_tail; } ;
typedef int __u32 ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const,int) ;

__attribute__((used)) static inline __s32 FUNC_2(const struct pvrdma_ring *VAR_1,
          __u32 VAR_2, __u32 *VAR_3)
{
 const __u32 VAR_4 = FUNC_0(&VAR_1->prod_tail);
 const __u32 VAR_5 = FUNC_0(&VAR_1->cons_head);

 if (FUNC_1(VAR_4, VAR_2) &&
     FUNC_1(VAR_5, VAR_2)) {
  *VAR_3 = VAR_5 & (VAR_2 - 1);
  return VAR_4 != VAR_5;
 }
 return VAR_0;
}

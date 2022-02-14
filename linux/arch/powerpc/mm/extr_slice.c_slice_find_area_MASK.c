
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {int dummy; } ;
struct mm_struct {int dummy; } ;


 unsigned long FUNC_0 (struct mm_struct*,unsigned long,struct slice_mask const*,int,unsigned long) ;
 unsigned long FUNC_1 (struct mm_struct*,unsigned long,struct slice_mask const*,int,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct mm_struct *VAR_0, unsigned long VAR_1,
         const struct slice_mask *VAR_2, int VAR_3,
         int VAR_4, unsigned long VAR_5)
{
 if (VAR_4)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
}

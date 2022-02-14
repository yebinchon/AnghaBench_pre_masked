
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_ctrl_block {unsigned long* vrs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct unwind_ctrl_block*,unsigned long**,int) ;

__attribute__((used)) static int FUNC_1(struct unwind_ctrl_block *VAR_3,
      unsigned long VAR_4)
{
 unsigned long *VAR_5 = (unsigned long *)VAR_3->vrs[VAR_0];
 int VAR_6 = 0;


 while (VAR_4) {
  if (VAR_4 & 1)
   if (FUNC_0(VAR_3, &VAR_5, VAR_6))
    return -VAR_1;
  VAR_4 >>= 1;
  VAR_6++;
 }
 VAR_3->vrs[VAR_0] = (unsigned long)VAR_5;

 return VAR_2;
}

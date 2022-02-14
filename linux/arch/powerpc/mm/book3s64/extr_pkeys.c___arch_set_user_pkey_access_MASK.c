
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;

int FUNC_3(struct task_struct *VAR_8, int VAR_9,
    unsigned long VAR_10)
{
 u64 VAR_11 = 0x0ul;
 u64 VAR_12 = 0x0ul;

 if (!FUNC_2(VAR_9))
  return -VAR_2;

 if (VAR_10 & VAR_5) {
  if (!VAR_7)
   return -VAR_2;
  VAR_12 |= VAR_3;
 }
 FUNC_1(VAR_9, VAR_12);


 if (VAR_10 & VAR_4)
  VAR_11 |= VAR_0 | VAR_1;
 else if (VAR_10 & VAR_6)
  VAR_11 |= VAR_1;

 FUNC_0(VAR_9, VAR_11);
 return 0;
}

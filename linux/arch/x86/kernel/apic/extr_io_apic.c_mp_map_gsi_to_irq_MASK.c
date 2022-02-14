
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_alloc_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int,int,unsigned int,struct irq_alloc_info*) ;

int FUNC_4(u32 VAR_3, unsigned int VAR_4, struct irq_alloc_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6, VAR_3);
 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_2);
 if ((VAR_4 & VAR_1) && VAR_8 < 0)
  return -VAR_0;

 return FUNC_3(VAR_3, VAR_8, VAR_6, VAR_7, VAR_4, VAR_5);
}

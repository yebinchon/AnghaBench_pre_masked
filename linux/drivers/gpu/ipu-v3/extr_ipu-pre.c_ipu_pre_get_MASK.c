
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_pre {int in_use; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

int FUNC_1(struct ipu_pre *VAR_6)
{
 u32 VAR_7;

 if (VAR_6->in_use)
  return -VAR_0;


 FUNC_0(0, VAR_6->regs + VAR_1);


 VAR_7 = VAR_2 |
       VAR_3 |
       VAR_5 |
       VAR_4;
 FUNC_0(VAR_7, VAR_6->regs + VAR_1);

 VAR_6->in_use = 1;
 return 0;
}

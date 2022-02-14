
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2wi {unsigned long status; int complete; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct p2wi *VAR_7 = VAR_6;
 unsigned long VAR_8;

 VAR_8 = FUNC_1(VAR_7->regs + VAR_1);
 VAR_7->status = VAR_8;


 VAR_8 &= (VAR_2 | VAR_3 |
     VAR_4);
 FUNC_2(VAR_8, VAR_7->regs + VAR_1);

 FUNC_0(&VAR_7->complete);

 return VAR_0;
}

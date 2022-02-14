
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charlcd {scalar_t__ irq; scalar_t__ virtbase; int complete; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct charlcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct charlcd *VAR_5)
{
 if (VAR_5->irq >= 0) {




  FUNC_3(VAR_3, VAR_5->virtbase + VAR_2);
  FUNC_1(&VAR_5->complete);
  FUNC_3(0x01, VAR_5->virtbase + VAR_1);
 }
 FUNC_2(VAR_5->virtbase + VAR_0);
 return FUNC_0(VAR_5) & VAR_4 ? 1 : 0;
}

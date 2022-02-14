
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (unsigned int) ;
 unsigned long FUNC_4 (unsigned int) ;
 TYPE_1__ VAR_1 ;
 unsigned long FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_9(unsigned int VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7 = VAR_3;

 if (VAR_7 > 0)
  ++VAR_7;

 FUNC_6(&VAR_2, VAR_6);

 VAR_5 = FUNC_5(VAR_1.base + VAR_0);

 VAR_5 &= ~(FUNC_4(VAR_7) | FUNC_2(VAR_7));
 VAR_5 |= FUNC_3(VAR_7);

 FUNC_8(VAR_4, VAR_1.base + FUNC_1(VAR_3));
 FUNC_8(VAR_4, VAR_1.base + FUNC_0(VAR_3));
 FUNC_8(VAR_5, VAR_1.base + VAR_0);

 FUNC_7(&VAR_2, VAR_6);
}

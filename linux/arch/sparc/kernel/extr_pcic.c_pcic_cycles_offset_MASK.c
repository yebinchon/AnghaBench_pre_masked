
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ pcic_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5 + VAR_1);
 VAR_7 = VAR_6 & ~VAR_2;

 if (VAR_6 & VAR_2)
  VAR_7 += VAR_3;




 VAR_7 = ((VAR_7 / VAR_0) * VAR_4) / (VAR_3 / VAR_0);


 return VAR_7 * 2;
}

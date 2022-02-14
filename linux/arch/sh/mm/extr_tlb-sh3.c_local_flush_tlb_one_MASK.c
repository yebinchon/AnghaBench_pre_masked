
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 TYPE_1__ VAR_4 ;

void FUNC_1(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;
 int VAR_9, VAR_10 = VAR_1;







 VAR_7 = VAR_3 | (VAR_6 & 0x1F000);
 VAR_8 = (VAR_6 & 0xfffe0000) | VAR_5;

 if ((VAR_4.flags & VAR_0)) {
  VAR_7 |= VAR_2;
  VAR_10 = 1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_0(VAR_8, VAR_7 + (VAR_9 << 8));
}

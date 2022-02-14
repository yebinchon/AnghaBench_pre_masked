
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf32_hdr {unsigned int e_flags; } ;
struct TYPE_2__ {unsigned int personality; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

void FUNC_3(const struct elf32_hdr *VAR_11)
{
 unsigned int VAR_12 = VAR_11->e_flags;
 unsigned int VAR_13 = VAR_9->personality & ~VAR_7;





 VAR_13 |= VAR_6;




 if ((VAR_12 & VAR_2) == VAR_3 &&
     (VAR_12 & VAR_1))
  VAR_13 &= ~VAR_0;
 else
  VAR_13 |= VAR_0;

 FUNC_1(VAR_13);







 if (VAR_10 & VAR_5 &&
     VAR_12 & (VAR_2 | VAR_4)) {
  FUNC_2(VAR_8);
 } else {
  FUNC_0(VAR_8);
 }
}

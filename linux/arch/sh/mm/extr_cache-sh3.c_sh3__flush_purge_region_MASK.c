
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long entry_mask; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_1(void *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_7 = (unsigned long)VAR_4 & ~(VAR_1-1);
 VAR_8 = ((unsigned long)VAR_4 + VAR_5 + VAR_1-1)
  & ~(VAR_1-1);

 for (VAR_6 = VAR_7; VAR_6 < VAR_8; VAR_6+=VAR_1) {
  unsigned long VAR_9, VAR_10;

  VAR_9 = (VAR_6 & 0xfffffc00);
  VAR_10 = VAR_0 |
   (VAR_6 & VAR_3.dcache.entry_mask) | VAR_2;
  FUNC_0(VAR_9, VAR_10);
 }
}

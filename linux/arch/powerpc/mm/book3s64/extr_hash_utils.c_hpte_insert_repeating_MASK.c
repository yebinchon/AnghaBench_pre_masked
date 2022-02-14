
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long (* hpte_insert ) (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int,int,int) ;int (* hpte_remove ) (unsigned long) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 long FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int,int,int) ;
 long FUNC_2 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int,int,int) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

long FUNC_5(unsigned long VAR_4, unsigned long VAR_5,
      unsigned long VAR_6, unsigned long VAR_7,
      unsigned long VAR_8, int VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 long VAR_12;

repeat:
 VAR_11 = (VAR_4 & VAR_2) * VAR_0;


 VAR_12 = VAR_3.hpte_insert(VAR_11, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_9, VAR_10);


 if (FUNC_4(VAR_12 == -1)) {
  VAR_11 = (~VAR_4 & VAR_2) * VAR_0;
  VAR_12 = VAR_3.hpte_insert(VAR_11, VAR_5, VAR_6, VAR_7,
      VAR_8 | VAR_1,
      VAR_9, VAR_9, VAR_10);
  if (VAR_12 == -1) {
   if (FUNC_0() & 0x1)
    VAR_11 = (VAR_4 & VAR_2) *
      VAR_0;

   VAR_3.hpte_remove(VAR_11);
   goto repeat;
  }
 }

 return VAR_12;
}

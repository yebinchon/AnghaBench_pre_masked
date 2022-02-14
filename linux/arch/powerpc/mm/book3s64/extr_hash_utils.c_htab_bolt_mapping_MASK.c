
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* hpte_insert ) (unsigned long,unsigned long,unsigned long,unsigned long,int ,int,int,int) ;} ;
struct TYPE_3__ {unsigned int shift; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned long,unsigned long,int,int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 () ;
 unsigned long FUNC_3 (unsigned long,int) ;
 unsigned long FUNC_4 (unsigned long,unsigned int,int) ;
 unsigned long FUNC_5 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_6 (unsigned long) ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int* VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (unsigned long,unsigned long,unsigned long,unsigned long,int ,int,int,int) ;

int FUNC_10(unsigned long VAR_11, unsigned long VAR_12,
        unsigned long VAR_13, unsigned long VAR_14,
        int VAR_15, int VAR_16)
{
 unsigned long VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20;
 int VAR_21 = 0;

 VAR_20 = VAR_10[VAR_15].shift;
 VAR_19 = 1 << VAR_20;

 VAR_14 = FUNC_6(VAR_14);

 FUNC_1("htab_bolt_mapping(%lx..%lx -> %lx (%lx,%d,%d)\n",
     VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);

 for (VAR_17 = VAR_11, VAR_18 = VAR_13; VAR_17 < VAR_12;
      VAR_17 += VAR_19, VAR_18 += VAR_19) {
  unsigned long VAR_22, VAR_23;
  unsigned long VAR_24 = FUNC_3(VAR_17, VAR_16);
  unsigned long VAR_25 = FUNC_5(VAR_17, VAR_24, VAR_16);
  unsigned long VAR_26 = VAR_14;




  if (!VAR_24)
   return -1;

  if (FUNC_8(VAR_17, VAR_17 + VAR_19))
   VAR_26 &= ~VAR_1;
  if ((VAR_5 > VAR_3) &&
   FUNC_7(VAR_17, VAR_17 + VAR_19))
    VAR_26 &= ~VAR_1;

  VAR_22 = FUNC_4(VAR_25, VAR_20, VAR_16);
  VAR_23 = ((VAR_22 & VAR_6) * VAR_0);

  FUNC_0(!VAR_9.hpte_insert);
  VAR_21 = VAR_9.hpte_insert(VAR_23, VAR_25, VAR_18, VAR_26,
            VAR_2, VAR_15, VAR_15,
            VAR_16);

  if (VAR_21 < 0)
   break;






 }
 return VAR_21 < 0 ? VAR_21 : 0;
}

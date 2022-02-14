
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int asce; unsigned long* table; scalar_t__ removed; } ;


 int VAR_0 ;




 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ FUNC_0 (struct gmap*) ;

__attribute__((used)) static inline unsigned long *FUNC_1(struct gmap *VAR_14,
          unsigned long VAR_15, int VAR_16)
{
 unsigned long *VAR_17;

 if ((VAR_14->asce & VAR_0) + 4 < (VAR_16 * 4))
  return ((void*)0);
 if (FUNC_0(VAR_14) && VAR_14->removed)
  return ((void*)0);
 if (VAR_15 & (-1UL << (31 + ((VAR_14->asce & VAR_0) >> 2)*11)))
  return ((void*)0);
 VAR_17 = VAR_14->table;
 switch (VAR_14->asce & VAR_0) {
 case 131:
  VAR_17 += (VAR_15 & VAR_3) >> VAR_4;
  if (VAR_16 == 4)
   break;
  if (*VAR_17 & VAR_9)
   return ((void*)0);
  VAR_17 = (unsigned long *)(*VAR_17 & VAR_10);

 case 130:
  VAR_17 += (VAR_15 & VAR_5) >> VAR_6;
  if (VAR_16 == 3)
   break;
  if (*VAR_17 & VAR_9)
   return ((void*)0);
  VAR_17 = (unsigned long *)(*VAR_17 & VAR_10);

 case 129:
  VAR_17 += (VAR_15 & VAR_7) >> VAR_8;
  if (VAR_16 == 2)
   break;
  if (*VAR_17 & VAR_9)
   return ((void*)0);
  VAR_17 = (unsigned long *)(*VAR_17 & VAR_10);

 case 128:
  VAR_17 += (VAR_15 & VAR_12) >> VAR_13;
  if (VAR_16 == 1)
   break;
  if (*VAR_17 & VAR_9)
   return ((void*)0);
  VAR_17 = (unsigned long *)(*VAR_17 & VAR_11);
  VAR_17 += (VAR_15 & VAR_1) >> VAR_2;
 }
 return VAR_17;
}

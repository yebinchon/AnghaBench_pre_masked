
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
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
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long*) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_18, unsigned long VAR_19)
{
 unsigned long *VAR_20 = FUNC_0(VAR_18 & VAR_0);

 FUNC_2("AS:%016lx ", VAR_18);
 switch (VAR_18 & VAR_1) {
 case 131:
  VAR_20 += (VAR_19 & VAR_4) >> VAR_5;
  if (FUNC_1(VAR_20))
   goto bad;
  FUNC_3("R1:%016lx ", *VAR_20);
  if (*VAR_20 & VAR_11)
   goto out;
  VAR_20 = (unsigned long *)(*VAR_20 & VAR_12);

 case 130:
  VAR_20 += (VAR_19 & VAR_6) >> VAR_7;
  if (FUNC_1(VAR_20))
   goto bad;
  FUNC_3("R2:%016lx ", *VAR_20);
  if (*VAR_20 & VAR_11)
   goto out;
  VAR_20 = (unsigned long *)(*VAR_20 & VAR_12);

 case 129:
  VAR_20 += (VAR_19 & VAR_9) >> VAR_10;
  if (FUNC_1(VAR_20))
   goto bad;
  FUNC_3("R3:%016lx ", *VAR_20);
  if (*VAR_20 & (VAR_11 | VAR_8))
   goto out;
  VAR_20 = (unsigned long *)(*VAR_20 & VAR_12);

 case 128:
  VAR_20 += (VAR_19 & VAR_16) >> VAR_17;
  if (FUNC_1(VAR_20))
   goto bad;
  FUNC_3("S:%016lx ", *VAR_20);
  if (*VAR_20 & (VAR_13 | VAR_14))
   goto out;
  VAR_20 = (unsigned long *)(*VAR_20 & VAR_15);
 }
 VAR_20 += (VAR_19 & VAR_2) >> VAR_3;
 if (FUNC_1(VAR_20))
  goto bad;
 FUNC_3("P:%016lx ", *VAR_20);
out:
 FUNC_3("\n");
 return;
bad:
 FUNC_3("BAD\n");
}

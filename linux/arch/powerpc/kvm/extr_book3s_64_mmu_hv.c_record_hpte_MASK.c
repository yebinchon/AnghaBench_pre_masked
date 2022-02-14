
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revmap_entry {unsigned long guest_rpte; } ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (struct revmap_entry*,int *) ;
 unsigned long FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static long FUNC_11(unsigned long VAR_9, __be64 *VAR_10,
   unsigned long *VAR_11, struct revmap_entry *VAR_12,
   int VAR_13, int VAR_14)
{
 unsigned long VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18;
 int VAR_19 = 1;
 int VAR_20, VAR_21;


 VAR_21 = FUNC_4(VAR_12, VAR_10);
 if (!VAR_14 && !VAR_21)
  return 0;

 VAR_20 = 0;
 if (FUNC_0(VAR_10[0]) & (VAR_7 | VAR_4)) {
  VAR_20 = 1;
  if ((VAR_9 & VAR_8) &&
      !(FUNC_0(VAR_10[0]) & VAR_5))
   VAR_20 = 0;
 }
 if (VAR_20 != VAR_13)
  return 0;

 VAR_15 = VAR_16 = 0;
 if (VAR_20 || VAR_21) {

  FUNC_7();
  while (!FUNC_9(VAR_10, VAR_6))
   FUNC_2();
  VAR_15 = FUNC_0(VAR_10[0]);
  VAR_17 = FUNC_0(VAR_10[1]);
  if (FUNC_1(VAR_0)) {
   VAR_15 = FUNC_6(VAR_15, VAR_17);
   VAR_17 = FUNC_5(VAR_17);
  }


  VAR_20 = !!(VAR_15 & VAR_7);
  VAR_21 = !!(VAR_12->guest_rpte & VAR_1);


  VAR_18 = ~VAR_12->guest_rpte & (VAR_3 | VAR_2);
  if (VAR_20 && (VAR_18 & VAR_17)) {
   VAR_12->guest_rpte |= (VAR_17 &
    (VAR_3 | VAR_2)) | VAR_1;
   VAR_21 = 1;
  }

  if (VAR_15 & VAR_4) {
   VAR_15 &= ~VAR_4;
   VAR_15 |= VAR_7;
   VAR_20 = 1;
  }
  if ((VAR_9 & VAR_8) && !(VAR_15 & VAR_5))
   VAR_20 = 0;

  VAR_16 = VAR_12->guest_rpte;

  if (VAR_20 == VAR_13 && VAR_21) {
   VAR_16 &= ~VAR_1;
   VAR_12->guest_rpte = VAR_16;
  }
  FUNC_10(VAR_10, FUNC_0(VAR_10[0]));
  FUNC_8();
  if (!(VAR_20 == VAR_13 && (VAR_14 || VAR_21)))
   VAR_19 = 0;
 }
 VAR_11[0] = FUNC_3(VAR_15);
 VAR_11[1] = FUNC_3(VAR_16);
 return VAR_19;
}

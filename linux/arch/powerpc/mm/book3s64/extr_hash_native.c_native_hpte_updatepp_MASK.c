
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {int r; } ;


 int FUNC_0 (char*,...) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long,int,int) ;
 unsigned long FUNC_5 (struct hash_pte*) ;
 struct hash_pte* VAR_7 ;
 int FUNC_6 (struct hash_pte*) ;
 int FUNC_7 (struct hash_pte*) ;
 int FUNC_8 (unsigned long,int,int,int,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static long FUNC_10(unsigned long VAR_8, unsigned long VAR_9,
     unsigned long VAR_10, int VAR_11,
     int VAR_12, int VAR_13, unsigned long VAR_14)
{
 struct hash_pte *VAR_15 = VAR_7 + VAR_8;
 unsigned long VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19 = 0;

 VAR_17 = FUNC_4(VAR_10, VAR_11, VAR_13);

 FUNC_0("    update(vpn=%016lx, avpnv=%016lx, group=%lx, newpp=%lx)",
  VAR_10, VAR_17 & VAR_5, VAR_8, VAR_9);

 VAR_16 = FUNC_5(VAR_15);







 if (!FUNC_1(VAR_16, VAR_17) || !(VAR_16 & VAR_6)) {
  FUNC_0(" -> miss\n");
  VAR_18 = -1;
 } else {
  FUNC_6(VAR_15);

  VAR_16 = FUNC_5(VAR_15);
  if (FUNC_9(!FUNC_1(VAR_16, VAR_17) ||
        !(VAR_16 & VAR_6))) {
   VAR_18 = -1;
  } else {
   FUNC_0(" -> hit\n");

   VAR_15->r = FUNC_3((FUNC_2(VAR_15->r) &
      ~(VAR_4 | VAR_3)) |
            (VAR_9 & (VAR_4 | VAR_3 |
        VAR_2)));
  }
  FUNC_7(VAR_15);
 }

 if (VAR_14 & VAR_0)
  VAR_19 = 1;



 if (!(VAR_14 & VAR_1))
  FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_19);

 return VAR_18;
}

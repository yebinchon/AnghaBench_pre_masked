
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {scalar_t__ v; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (unsigned long,int,int) ;
 unsigned long FUNC_3 (struct hash_pte*) ;
 struct hash_pte* VAR_1 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct hash_pte*) ;
 int FUNC_7 (struct hash_pte*) ;
 int FUNC_8 (unsigned long,int,int,int,int) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_2, unsigned long VAR_3,
       int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct hash_pte *VAR_8 = VAR_1 + VAR_2;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;

 FUNC_5(VAR_11);

 FUNC_0("    invalidate(vpn=%016lx, hash: %lx)\n", VAR_3, VAR_2);

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_6);
 VAR_9 = FUNC_3(VAR_8);

 if (FUNC_1(VAR_9, VAR_10) && (VAR_9 & VAR_0)) {
  FUNC_6(VAR_8);

  VAR_9 = FUNC_3(VAR_8);

  if (FUNC_1(VAR_9, VAR_10) && (VAR_9 & VAR_0))

   VAR_8->v = 0;
  else
   FUNC_7(VAR_8);
 }







 FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_4(VAR_11);
}

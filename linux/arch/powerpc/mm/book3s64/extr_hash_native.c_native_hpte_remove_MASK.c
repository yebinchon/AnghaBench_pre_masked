
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {scalar_t__ v; } ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (scalar_t__) ;
 struct hash_pte* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (struct hash_pte*) ;
 int FUNC_4 (struct hash_pte*) ;

__attribute__((used)) static long FUNC_5(unsigned long VAR_4)
{
 struct hash_pte *VAR_5;
 int VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 FUNC_0("    remove(group=%lx)\n", VAR_4);


 VAR_7 = FUNC_2() & 0x7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_3 + VAR_4 + VAR_7;
  VAR_8 = FUNC_1(VAR_5->v);

  if ((VAR_8 & VAR_2) && !(VAR_8 & VAR_1)) {

   FUNC_3(VAR_5);
   VAR_8 = FUNC_1(VAR_5->v);
   if ((VAR_8 & VAR_2)
       && !(VAR_8 & VAR_1))
    break;
   FUNC_4(VAR_5);
  }

  VAR_7++;
  VAR_7 &= 0x7;
 }

 if (VAR_6 == VAR_0)
  return -1;


 VAR_5->v = 0;

 return VAR_6;
}

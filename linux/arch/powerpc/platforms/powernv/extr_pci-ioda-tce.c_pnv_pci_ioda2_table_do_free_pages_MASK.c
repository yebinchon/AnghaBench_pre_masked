
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int __be64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int * FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long const,int ) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(__be64 *VAR_2,
  unsigned long VAR_3, unsigned int VAR_4)
{
 const unsigned long VAR_5 = (unsigned long) VAR_2 &
   ~(VAR_0 | VAR_1);

 if (VAR_4) {
  long VAR_6;
  u64 *VAR_7 = (u64 *) VAR_5;

  for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
   unsigned long VAR_8 = FUNC_1(VAR_7[VAR_6]);

   if (!(VAR_8 & (VAR_0 | VAR_1)))
    continue;

   FUNC_4(FUNC_0(VAR_8), VAR_3,
     VAR_4 - 1);
  }
 }

 FUNC_2(VAR_5, FUNC_3(VAR_3 << 3));
}

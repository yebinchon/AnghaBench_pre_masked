
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flusher_data {int addr1; int addr2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (void*,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(void *VAR_6)
{
 struct flusher_data *VAR_7 = VAR_6;
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;

 VAR_8 = VAR_7->addr1 & ~(VAR_2-1);
 VAR_9 = (VAR_7->addr2 + VAR_2-1) & ~(VAR_2-1);





 FUNC_5(VAR_11);
 FUNC_3();



 if (((VAR_9 - VAR_8) >> VAR_4) >= VAR_3) {
  FUNC_1(FUNC_0(VAR_5) | VAR_1,
        VAR_5);
 } else {
  for (VAR_10 = VAR_8; VAR_10 < VAR_9; VAR_10 += VAR_2)
   FUNC_7(VAR_0, VAR_10);
 }

 FUNC_2();
 FUNC_4(VAR_11);
}

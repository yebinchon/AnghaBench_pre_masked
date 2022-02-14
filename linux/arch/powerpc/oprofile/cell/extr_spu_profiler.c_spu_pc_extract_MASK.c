
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int*) ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_1(int VAR_5, int VAR_6)
{

 u64 VAR_7[2];
 u64 VAR_8;
 int VAR_9;

 VAR_8 = VAR_2;
 FUNC_0(VAR_5, VAR_7);

 for (VAR_9 = VAR_1-1; VAR_9 >= 0; VAR_9--) {



  VAR_4[VAR_9 * VAR_3 + VAR_6]
   = (VAR_8 & VAR_7[0]) << 2;
  VAR_4[(VAR_9 + VAR_1) * VAR_3 + VAR_6]
   = (VAR_8 & VAR_7[1]) << 2;

  VAR_7[0] = VAR_7[0] >> VAR_0;
  VAR_7[1] = VAR_7[1] >> VAR_0;
 }
}

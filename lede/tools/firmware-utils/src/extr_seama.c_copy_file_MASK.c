
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,int,int,int *) ;
 int FUNC_3 (int *,int,size_t,int *) ;

__attribute__((used)) static size_t FUNC_4(FILE * VAR_1, FILE * VAR_2)
{
 size_t VAR_3, VAR_4 = 0;
 uint8_t VAR_5[VAR_0];

 while (!FUNC_0(VAR_2) && !FUNC_1(VAR_2))
 {
  VAR_3 = FUNC_2(VAR_5, sizeof(uint8_t), VAR_0, VAR_2);
  if (VAR_3 > 0)
  {
   VAR_4 += VAR_3;
   FUNC_3(VAR_5, sizeof(uint8_t), VAR_3, VAR_1);
  }
 }
 return VAR_4;
}

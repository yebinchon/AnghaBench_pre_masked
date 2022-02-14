
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;
typedef int MD5_CTX ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *,int,size_t,int *) ;

__attribute__((used)) static size_t FUNC_6(FILE * VAR_1, size_t VAR_2, uint8_t * VAR_3)
{
 MD5_CTX VAR_4;
 size_t VAR_5, VAR_6, VAR_7;
 uint8_t VAR_8[VAR_0];

 VAR_5 = VAR_2 ? VAR_2 : sizeof(VAR_8);
 VAR_6 = 0;

 FUNC_1(&VAR_4);
 while (!FUNC_3(VAR_1) && !FUNC_4(VAR_1) && VAR_5 > 0)
 {
  VAR_7 = VAR_5 < sizeof(VAR_8) ? VAR_5 : sizeof(VAR_8);
  VAR_7 = FUNC_5(VAR_8, sizeof(char), VAR_7, VAR_1);
  if (VAR_7 > 0)
  {
   FUNC_2(&VAR_4, VAR_8, VAR_7);
   VAR_6 += VAR_7;
  }
  if (VAR_2) VAR_5 -= VAR_7;
 }
 FUNC_0(VAR_3, &VAR_4);
 return VAR_6;
}

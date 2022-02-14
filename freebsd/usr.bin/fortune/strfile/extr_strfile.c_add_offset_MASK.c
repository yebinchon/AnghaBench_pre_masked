
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int beoff ;
typedef int FILE ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int,int,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(FILE *VAR_3, off_t VAR_4)
{
 off_t VAR_5;

 if (!VAR_1) {
  VAR_5 = FUNC_2(VAR_4);
  FUNC_1(&VAR_5, 1, sizeof(VAR_5), VAR_3);
 } else {
  FUNC_0(VAR_2, VAR_0 + 1);
  VAR_2[VAR_0] = VAR_4;
 }
 VAR_0++;
}

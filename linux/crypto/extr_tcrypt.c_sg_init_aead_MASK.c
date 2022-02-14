
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scatterlist*,int) ;
 int FUNC_1 (struct scatterlist*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct scatterlist *VAR_2, char *VAR_3[VAR_1],
    unsigned int VAR_4, const void *VAR_5,
    unsigned int VAR_6)
{
 int VAR_7 = (VAR_4 + VAR_0 - 1)/VAR_0;
 int VAR_8, VAR_9;

 if (VAR_7 > VAR_1) {
  VAR_9 = VAR_0;
  VAR_7 = VAR_1;
 } else {
  VAR_9 = VAR_4 % VAR_0;
 }

 FUNC_0(VAR_2, VAR_7 + 1);

 FUNC_1(&VAR_2[0], VAR_5, VAR_6);

 if (VAR_9)
  VAR_7--;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_1(&VAR_2[VAR_8 + 1], VAR_3[VAR_8], VAR_0);

 if (VAR_9)
  FUNC_1(&VAR_2[VAR_8 + 1], VAR_3[VAR_8], VAR_9);
}

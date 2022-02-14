
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {char* dev_str; } ;
typedef int off_t ;


 int VAR_0 ;
 struct dma_chan* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int,char*) ;

int FUNC_2(char *VAR_1, char **VAR_2, off_t VAR_3,
    int VAR_4, int *VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct dma_chan *VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_9 = FUNC_0(VAR_7);
  if (VAR_9 != ((void*)0))
   VAR_8 += FUNC_1(VAR_1 + VAR_8, "%2d: %s\n",
           VAR_7, VAR_9->dev_str);
 }

 if (VAR_3 >= VAR_8) {
  *VAR_2 = VAR_1;
  *VAR_5 = 1;
  return 0;
 }
 *VAR_2 = VAR_1 + VAR_3;
 VAR_8 -= VAR_3;
 if (VAR_8 > VAR_4)
  return VAR_4;
 *VAR_5 = 1;
 return VAR_8;
}

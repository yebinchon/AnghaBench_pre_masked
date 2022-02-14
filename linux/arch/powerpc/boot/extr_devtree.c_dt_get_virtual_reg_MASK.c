
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int,unsigned long*,int *) ;
 int FUNC_1 (void*,char*,void**,int) ;

int FUNC_2(void *VAR_0, void **VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, "virtual-reg", VAR_1, VAR_2 * 4);
 if (VAR_4 > 0)
  return VAR_4 / 4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_0(VAR_0, VAR_4, &VAR_3, ((void*)0)))
   break;

  VAR_1[VAR_4] = (void *)VAR_3;
 }

 return VAR_4;
}

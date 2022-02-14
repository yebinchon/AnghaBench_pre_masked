
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,void*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_0, int VAR_1, void *VAR_2)
{
 char **VAR_3 = VAR_2, *VAR_4 = *VAR_3;
 int VAR_5;

 FUNC_0(VAR_4, (void *) VAR_0, VAR_1);
 VAR_5 = FUNC_1(VAR_4, VAR_1);
 *VAR_3 += VAR_5;

 if (VAR_5 < VAR_1)
         return 1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,size_t,char*,int) ;
 int FUNC_2 (char*,int ,size_t) ;
 int * VAR_1 ;

__attribute__((used)) static char *FUNC_3(char *VAR_2, size_t VAR_3, unsigned int VAR_4)
{
 if (VAR_4 < FUNC_0(VAR_1))
  FUNC_2(VAR_2, VAR_1[VAR_4], VAR_3);
 else
  FUNC_1(VAR_2, VAR_3, "Reserved%u", VAR_4 + VAR_0);
 return VAR_2;
}

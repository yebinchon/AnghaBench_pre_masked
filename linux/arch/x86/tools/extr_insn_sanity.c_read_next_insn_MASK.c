
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_2)
{
 char VAR_3[256] = "", *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3, FUNC_0(VAR_3), VAR_1);
 if (VAR_4 == ((void*)0) || FUNC_1(VAR_1))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_2[VAR_5] = (unsigned char)FUNC_3(VAR_4, &VAR_4, 16);
  if (*VAR_4 != ' ')
   break;
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(unsigned int VAR_1, char *VAR_2)
{
 const char *VAR_3 = "";
 ssize_t VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  if (VAR_1 & (1 << VAR_5)) {
   VAR_4 += FUNC_1(VAR_2 + VAR_4, "%s%s",
           VAR_3, VAR_0[VAR_5]);
   VAR_3 = " ";
  }
 if (VAR_4)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, "\n");
 return VAR_4;
}

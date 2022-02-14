
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, int VAR_1,
         char VAR_2, unsigned long *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0, VAR_7;

 VAR_6 += FUNC_3(VAR_0, FUNC_2(VAR_1, 0), "%c", VAR_2);
 for (VAR_7 = VAR_4; VAR_7 < VAR_5; VAR_7++)
  if (VAR_3[FUNC_1(VAR_7)] & FUNC_0(VAR_7))
   VAR_6 += FUNC_3(VAR_0 + VAR_6, FUNC_2(VAR_1 - VAR_6, 0), "%X,", VAR_7);
 return VAR_6;
}

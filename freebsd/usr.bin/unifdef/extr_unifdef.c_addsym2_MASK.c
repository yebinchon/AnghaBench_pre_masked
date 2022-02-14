
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char const**) ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 char const** VAR_3 ;
 char const** VAR_4 ;

__attribute__((used)) static void
FUNC_3(bool VAR_5, const char *VAR_6, const char *VAR_7)
{
 const char *VAR_8 = VAR_6;
 int VAR_9;

 VAR_9 = FUNC_2(&VAR_8);
 if (VAR_9 < 0) {
  if (VAR_2 >= VAR_0)
   FUNC_1(2, "too many symbols");
  VAR_9 = VAR_2++;
 }
 VAR_1[VAR_9] = VAR_5;
 VAR_3[VAR_9] = VAR_6;
 VAR_4[VAR_9] = VAR_7;
 FUNC_0("addsym", VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,char*,size_t) ;

void
FUNC_3(int VAR_5, char *VAR_6, size_t VAR_7)
{
 size_t VAR_8;
 char *VAR_9;

 VAR_9 = VAR_6;
 if (VAR_2 == 0)
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   *VAR_9 = VAR_4[(*VAR_9) & 0177];
   VAR_9++;
  }
 if (FUNC_2(VAR_5, VAR_6, VAR_7) < 0) {
  if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
   FUNC_1("Lost carrier.");

  FUNC_0("write");
 }
}

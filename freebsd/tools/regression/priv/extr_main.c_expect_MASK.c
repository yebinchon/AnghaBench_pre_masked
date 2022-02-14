
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int,int) ;
 int FUNC_1 (char*,char const*) ;

void
FUNC_2(const char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{

 if (VAR_3 == 0) {
  if (VAR_4 != 0) {
   VAR_1 = 1;
   FUNC_1("%s: returned 0", VAR_2);
  }
 } else {
  if (VAR_4 == 0) {
   VAR_1 = 1;
   FUNC_0("%s: returned (%d, %d)", VAR_2, VAR_3, VAR_0);
  } else if (VAR_5 != VAR_0) {
   VAR_1 = 1;
   FUNC_0("%s: returned (%d, %d)", VAR_2, VAR_3, VAR_0);
  }
 }
}

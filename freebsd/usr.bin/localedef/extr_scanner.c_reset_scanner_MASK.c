
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 char const* VAR_3 ;
 int * FUNC_2 (char const*,char*) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void
FUNC_4(const char *VAR_11)
{
 if (VAR_11 == ((void*)0)) {
  VAR_3 = "<stdin>";
  VAR_6 = 1;
 } else {
  if (!VAR_6)
   (void) FUNC_1(VAR_4);
  if ((VAR_4 = FUNC_2(VAR_11, "r")) == ((void*)0)) {
   FUNC_3("fopen");
   FUNC_0(4);
  } else {
   VAR_6 = 0;
  }
  VAR_3 = VAR_11;
 }
 VAR_0 = '#';
 VAR_1 = '\\';
 VAR_5 = 0;
 VAR_2 = 0;
 VAR_7 = 1;
 VAR_8 = 1;
 VAR_9 = 0;
 VAR_10 = 0;
}

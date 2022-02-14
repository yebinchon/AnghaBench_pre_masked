
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int,int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(const char *VAR_3, char *VAR_4, int VAR_5, int *VAR_6)
{
 unsigned long VAR_7;
 char *VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_4)) {
  VAR_8 = FUNC_3(VAR_5, VAR_1);
  if (!VAR_8) {
   FUNC_5("The cpcmd kernel function failed to allocate a response buffer\n");
   return -VAR_0;
  }
  FUNC_6(&VAR_2, VAR_7);
  VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_5, VAR_6);
  FUNC_7(&VAR_2, VAR_7);
  FUNC_4(VAR_4, VAR_8, VAR_5);
  FUNC_2(VAR_8);
 } else {
  FUNC_6(&VAR_2, VAR_7);
  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_7(&VAR_2, VAR_7);
 }
 return VAR_9;
}

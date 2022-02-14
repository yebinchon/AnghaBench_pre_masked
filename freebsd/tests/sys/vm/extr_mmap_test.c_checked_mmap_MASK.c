
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,char*,char const*,int ,int) ;
 int FUNC_1 (int,char*,char const*,...) ;
 int FUNC_2 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 void* FUNC_4 (int *,int,int,int,int,int ) ;
 int FUNC_5 (void*,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_2, int VAR_3, int VAR_4, int VAR_5, const char *VAR_6)
{
 void *VAR_7;
 int VAR_8;

 FUNC_2((VAR_8 = FUNC_3()) > 0);
 VAR_7 = FUNC_4(((void*)0), VAR_8, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_7 == VAR_0) {
  if (VAR_5 == 0)
   FUNC_1(0, "%s failed with errno %d", VAR_6,
       VAR_1);
  else
   FUNC_0(VAR_5, VAR_1,
       "%s failed with wrong errno %d (expected %d)", VAR_6,
       VAR_1, VAR_5);
 } else {
  FUNC_1(VAR_5 == 0, "%s succeeded", VAR_6);
  FUNC_5(VAR_7, VAR_8);
 }
}

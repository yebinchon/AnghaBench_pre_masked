
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ efidp ;
typedef int dpbuf ;
typedef int buffer ;


 int VAR_0 ;
 size_t FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,char**,char**,char**) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int VAR_2 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];
 efidp VAR_5;
 size_t VAR_6;
 char *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_5 = (efidp)VAR_4;
 while (FUNC_2(VAR_3, sizeof(VAR_3), VAR_2)) {
  VAR_7= FUNC_4(VAR_3);
  VAR_6 = FUNC_0(VAR_7, VAR_5, sizeof(VAR_4));
  VAR_11 = FUNC_1(VAR_5, &VAR_8, &VAR_9, &VAR_10);
  if (VAR_11 == 0)
   FUNC_3("%s:%s %s\n", VAR_8, VAR_9, VAR_10);
  else {
   VAR_1 = VAR_11;
   FUNC_5("Can't convert '%s' to unix", VAR_7);
  }
 }
}

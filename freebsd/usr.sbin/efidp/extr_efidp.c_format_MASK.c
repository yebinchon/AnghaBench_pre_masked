
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ const_efidp ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,scalar_t__,size_t) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,void**) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char VAR_2[VAR_0];
 ssize_t VAR_3;
 ssize_t VAR_4;
 void *VAR_5;
 size_t VAR_6;
 const_efidp VAR_7;

 VAR_4 = FUNC_5(VAR_1, &VAR_5);
 if (VAR_4 == -1)
  FUNC_2(1, "read");
 VAR_7 = (const_efidp)VAR_5;
 while (VAR_4 > 0) {
  VAR_6 = FUNC_1(VAR_7);
  VAR_3 = FUNC_0(VAR_2, sizeof(VAR_2),
      VAR_7, VAR_6);
  if (VAR_3 > 0)
   FUNC_4("%s\n", VAR_2);
  VAR_4 -= VAR_6;
  VAR_7 = (const_efidp)((const char *)VAR_7 + VAR_6);
 }
 FUNC_3(VAR_5);
}

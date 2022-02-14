
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,char const*,...) ;
 size_t FUNC_5 (char const*,char*,size_t) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 ssize_t VAR_5;
 char *VAR_6;
 size_t VAR_7;

 FUNC_1(&VAR_7, VAR_3, 1);
 VAR_6 = FUNC_3(VAR_7);
 FUNC_0(VAR_6);

 VAR_5 = FUNC_5(VAR_1, VAR_6, VAR_3);
 if (VAR_5 != (ssize_t)VAR_3) {
  FUNC_4(VAR_0, "failed to read symlink data for '%s'", VAR_1);
  VAR_4 = -1;
 }
 else {
  VAR_6[VAR_5] = '\0';

  if (FUNC_6(VAR_6, VAR_2) < 0) {
   FUNC_4(VAR_0, "could not symlink '%s' as '%s'",
    VAR_6, VAR_2);
   VAR_4 = -1;
  }
 }

 FUNC_2(VAR_6);
 return VAR_4;
}

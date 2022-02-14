
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int mac ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int VAR_4 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_5, const char *VAR_6[])
{
 unsigned char VAR_7[VAR_2];
 ssize_t VAR_8;

 if (VAR_5 != 0) {
  FUNC_3();
  return VAR_0;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_7, sizeof(VAR_7));
 if (VAR_8 != sizeof(VAR_7)) {
  FUNC_0(VAR_4, "failed to read from stdin\n");
  return VAR_1;
 }

 FUNC_1(VAR_7);
 return 0;
}

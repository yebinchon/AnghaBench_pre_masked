
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,int,char*,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(int VAR_4, int VAR_5)
{
 char VAR_6[16384];
 ssize_t VAR_7 = FUNC_1(VAR_4, VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0) {
  if (VAR_3 != VAR_0 && VAR_3 != VAR_1)
   FUNC_0("read error: %s\n", FUNC_3(VAR_3));
  return VAR_7;
 }
 FUNC_2(1, VAR_5, VAR_6, VAR_7, VAR_2);
 return VAR_7;
}

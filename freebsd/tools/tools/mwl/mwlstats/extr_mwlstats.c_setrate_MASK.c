
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,int) ;

__attribute__((used)) static void
FUNC_1(char VAR_2[], size_t VAR_3, uint8_t VAR_4)
{
 if (VAR_4 & VAR_0)
  FUNC_0(VAR_2, VAR_3, "MCS%u", VAR_4 & VAR_1);
 else if (VAR_4 & 1)
  FUNC_0(VAR_2, VAR_3, "%u.5M", VAR_4 / 2);
 else
  FUNC_0(VAR_2, VAR_3, "%uM", VAR_4 / 2);
}

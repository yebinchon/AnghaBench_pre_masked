
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int) ;

__attribute__((used)) static void
FUNC_1(char VAR_1[], size_t VAR_2, int VAR_3)
{
 if (VAR_3 & VAR_0)
  FUNC_0(VAR_1, VAR_2, "MCS%u", VAR_3 &~ VAR_0);
 else if (VAR_3 & 1)
  FUNC_0(VAR_1, VAR_2, "%u.5M", VAR_3 / 2);
 else
  FUNC_0(VAR_1, VAR_2, "%uM", VAR_3 / 2);
}

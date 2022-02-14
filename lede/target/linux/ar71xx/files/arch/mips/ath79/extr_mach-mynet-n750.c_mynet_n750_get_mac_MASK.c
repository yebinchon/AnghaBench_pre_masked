
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char const*,char*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2, char *VAR_3)
{
 u8 *VAR_4 = (u8 *) FUNC_0(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1,
      VAR_2, VAR_3);
 if (VAR_5)
  FUNC_2("no MAC address found for %s\n", VAR_2);
}

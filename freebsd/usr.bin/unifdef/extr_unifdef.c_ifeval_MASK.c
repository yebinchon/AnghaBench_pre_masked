
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Linetype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,long*,char const**) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static Linetype
FUNC_2(const char **VAR_5)
{
 Linetype VAR_6;
 long VAR_7 = 0;

 FUNC_0("eval %s", *VAR_5);
 VAR_2 = VAR_4 ? 0 : 1;
 VAR_6 = FUNC_1(VAR_3, &VAR_7, VAR_5);
 FUNC_0("eval = %d", VAR_7);
 return (VAR_2 ? VAR_1 : VAR_6 == VAR_0 ? VAR_1 : VAR_6);
}

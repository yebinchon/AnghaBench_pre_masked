
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_ref_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,char const*,int *,int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(const char *VAR_6)
{
 key_ref_t VAR_7;

 VAR_7 = FUNC_2(FUNC_3(VAR_5, 1),
       "blacklist",
       VAR_6,
       ((void*)0),
       0,
       ((VAR_2 & ~VAR_3) |
        VAR_4),
       VAR_1 |
       VAR_0);
 if (FUNC_0(VAR_7)) {
  FUNC_4("Problem blacklisting hash (%ld)\n", FUNC_1(VAR_7));
  return FUNC_1(VAR_7);
 }
 return 0;
}

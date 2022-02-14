
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int buf ;


 int FUNC_0 (char const*,int *,char const*,char*,int,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,char const*,char const*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const char *VAR_1,
        u8 *VAR_2, u8 *VAR_3,
        bool VAR_4)
{
 char VAR_5[100];
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(VAR_0, ((void*)0), VAR_1, VAR_5, sizeof(VAR_5), VAR_4);
 if (VAR_6 < 0)
  return;
 VAR_6 = FUNC_1(FUNC_3(VAR_5), 0, &VAR_7);
 if (VAR_6) {
  FUNC_2("can not parse nvram name %s%s with value %s got %i\n",
   VAR_0, VAR_1, VAR_5, VAR_6);
  return;
 }

 if (VAR_7 == 0xffff || VAR_7 == 0xffffffff)
  return;

 *VAR_2 = VAR_7 & 0xff;
 *VAR_3 = (VAR_7 >> 16) & 0xff;
}

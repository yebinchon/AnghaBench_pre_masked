
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int,char const*,char const*,unsigned int,int) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2, const char *VAR_3,
   unsigned VAR_4, int VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_2(VAR_1, VAR_0);
 if (VAR_6 < 0)
  FUNC_0("Cannot open '%s'", VAR_1);
 FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}

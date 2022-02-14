
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,char*) ;
 char* FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(const char **VAR_1)
{
 for (; *VAR_1; VAR_1++) {
  timestamp_t VAR_2;
  VAR_2 = FUNC_1(*VAR_1);
  FUNC_2("%s -> %s\n", *VAR_1, FUNC_3(VAR_2, 0, FUNC_0(VAR_0)));
 }
}

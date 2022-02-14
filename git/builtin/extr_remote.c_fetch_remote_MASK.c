
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const**,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(const char *VAR_2)
{
 const char *VAR_3[] = { "fetch", VAR_2, ((void*)0), ((void*)0) };
 if (VAR_1) {
  VAR_3[1] = "-v";
  VAR_3[2] = VAR_2;
 }
 FUNC_2(FUNC_0("Updating %s"), VAR_2);
 if (FUNC_3(VAR_3, VAR_0))
  return FUNC_1(FUNC_0("Could not fetch %s"), VAR_2);
 return 0;
}

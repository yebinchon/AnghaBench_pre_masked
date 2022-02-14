
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_0, device_t VAR_1)
{
 const char *VAR_2;

 FUNC_1(VAR_0, "<%s>", FUNC_3(VAR_1));
 FUNC_2(FUNC_0(VAR_1));
 VAR_2 = FUNC_4(VAR_1);
 FUNC_5(" type %s (no driver attached)\n",
     VAR_2 != ((void*)0) ? VAR_2 : "unknown");
}

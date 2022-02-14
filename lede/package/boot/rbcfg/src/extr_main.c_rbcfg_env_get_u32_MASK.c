
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rbcfg_value {char const* name; } ;
struct rbcfg_env {char* name; int id; } ;


 int FUNC_0 (int ,char*,int,char*) ;
 int VAR_0 ;
 struct rbcfg_value* FUNC_1 (struct rbcfg_env const*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static const char *
FUNC_3(const struct rbcfg_env *VAR_2)
{
 const struct rbcfg_value *VAR_3;
 uint32_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_2->id, &VAR_4);
 if (VAR_5)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_2, VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1, "unknown value %08x found for %s\n",
   VAR_4, VAR_2->name);
  return ((void*)0);
 }

 return VAR_3->name;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testvec_config {int name; } ;


 int FUNC_0 (char*,char const*,char const*,int,char const*,int ) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0, int VAR_1,
     const char *VAR_2, const char *VAR_3,
     const struct testvec_config *VAR_4)
{
 if (VAR_1)
  FUNC_0("alg: shash: %s %s() failed with err %d on test vector %s, cfg=\"%s\"\n",
         VAR_2, VAR_0, VAR_1, VAR_3, VAR_4->name);
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct testvec_config {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,char const*,...) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, int VAR_2,
       u8 *VAR_3, unsigned int VAR_4,
       const char *VAR_5, const char *VAR_6,
       const struct testvec_config *VAR_7)
{
 if (VAR_2) {
  FUNC_0("alg: ahash: %s %s() failed with err %d on test vector %s, cfg=\"%s\"\n",
         VAR_5, VAR_1, VAR_2, VAR_6, VAR_7->name);
  return VAR_2;
 }
 if (!FUNC_1(VAR_3, VAR_4)) {
  FUNC_0("alg: ahash: %s %s() used result buffer on test vector %s, cfg=\"%s\"\n",
         VAR_5, VAR_1, VAR_6, VAR_7->name);
  return -VAR_0;
 }
 return 0;
}

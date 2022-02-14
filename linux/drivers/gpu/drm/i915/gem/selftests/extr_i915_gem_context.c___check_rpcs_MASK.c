
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,char const*,int,...) ;
 int FUNC_1 (char*,int,int,char*,int,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_5, u32 VAR_6, int VAR_7, unsigned int VAR_8,
      const char *VAR_9, const char *VAR_10)
{
 if (VAR_7 == VAR_8)
  return 0;

 if (VAR_7 < 0) {
  FUNC_0("%s: %s read slice count failed with %d%s\n",
         VAR_5, VAR_9, VAR_7, VAR_10);
  return VAR_7;
 }

 FUNC_0("%s: %s slice count %d is not %u%s\n",
        VAR_5, VAR_9, VAR_7, VAR_8, VAR_10);

 FUNC_1("RPCS=0x%x; %u%sx%u%s\n",
  VAR_6, VAR_7,
  (VAR_6 & VAR_4) ? "*" : "",
  (VAR_6 & VAR_2) >> VAR_3,
  (VAR_6 & VAR_1) ? "*" : "");

 return -VAR_0;
}

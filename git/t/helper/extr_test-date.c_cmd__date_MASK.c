
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
typedef int time_t ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (char const**) ;
 int FUNC_4 (char const**,char const*) ;
 int FUNC_5 (char const**) ;
 int FUNC_6 (char const**) ;
 scalar_t__ FUNC_7 (char const*,char*,char const**) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;

int FUNC_10(int VAR_1, const char **VAR_2)
{
 const char *VAR_3;

 VAR_2++;
 if (!*VAR_2)
  FUNC_9(VAR_0);
 if (!FUNC_8(*VAR_2, "relative"))
  FUNC_6(VAR_2+1);
 else if (!FUNC_8(*VAR_2, "human"))
  FUNC_5(VAR_2+1);
 else if (FUNC_7(*VAR_2, "show:", &VAR_3))
  FUNC_4(VAR_2+1, VAR_3);
 else if (!FUNC_8(*VAR_2, "parse"))
  FUNC_3(VAR_2+1);
 else if (!FUNC_8(*VAR_2, "approxidate"))
  FUNC_2(VAR_2+1);
 else if (!FUNC_8(*VAR_2, "timestamp"))
  FUNC_1(VAR_2+1);
 else if (!FUNC_8(*VAR_2, "getnanos"))
  FUNC_0(VAR_2+1);
 else if (!FUNC_8(*VAR_2, "is64bit"))
  return sizeof(timestamp_t) == 8 ? 0 : 1;
 else if (!FUNC_8(*VAR_2, "time_t-is64bit"))
  return sizeof(time_t) == 8 ? 0 : 1;
 else
  FUNC_9(VAR_0);
 return 0;
}

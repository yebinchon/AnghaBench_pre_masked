
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, "%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx",
     &VAR_3[0], &VAR_3[1], &VAR_3[2], &VAR_3[3], &VAR_3[4], &VAR_3[5]);

 if (VAR_4 != VAR_1)
  return VAR_0;

 return 0;
}

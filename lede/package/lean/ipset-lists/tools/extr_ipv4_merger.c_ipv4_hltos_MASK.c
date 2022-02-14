
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,char*,int,int,int,int) ;

__attribute__((used)) static inline char *FUNC_1(u32 VAR_0, char *VAR_1)
{
 static char VAR_2[20];
 if (!VAR_1)
  VAR_1 = VAR_2;
 FUNC_0(VAR_1, "%d.%d.%d.%d",
  (int)(VAR_0 >> 24) & 0xff, (int)(VAR_0 >> 16) & 0xff,
  (int)(VAR_0 >> 8) & 0xff, (int)VAR_0 & 0xff );
 return VAR_1;
}

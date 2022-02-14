
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum sensors { ____Placeholder_sensors } sensors ;


 int VAR_0 ;
 char const* FUNC_0 (int) ;
 int VAR_1 ;
 char* FUNC_1 (int,char*) ;
 int FUNC_2 (char const*,int *,char*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_2,
     enum sensors VAR_3, u32 *VAR_4)
{
 char VAR_5[VAR_1];
 const char *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_5);
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_6 = FUNC_1(VAR_3, VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 return VAR_6;
}

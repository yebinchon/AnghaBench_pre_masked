
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cover_from_description { ____Placeholder_cover_from_description } cover_from_description ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum cover_from_description FUNC_3(const char *VAR_4)
{
 if (!VAR_4 || !FUNC_2(VAR_4, "default"))
  return VAR_1;
 else if (!FUNC_2(VAR_4, "none"))
  return VAR_2;
 else if (!FUNC_2(VAR_4, "message"))
  return VAR_1;
 else if (!FUNC_2(VAR_4, "subject"))
  return VAR_3;
 else if (!FUNC_2(VAR_4, "auto"))
  return VAR_0;
 else
  FUNC_1(FUNC_0("%s: invalid cover from description mode"), VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const** VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_2)
{
 static char VAR_3[256];

 if (VAR_2 <= 0 || VAR_2 >= VAR_0) {
  FUNC_0(VAR_3, "unknown type %d", VAR_2);
  return VAR_3;
 }

 return VAR_1[VAR_2];
}

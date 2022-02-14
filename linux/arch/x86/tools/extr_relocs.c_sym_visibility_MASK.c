
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const**) ;




 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(unsigned VAR_0)
{
 static const char *VAR_1[] = {

  [131] = "STV_DEFAULT",
  [129] = "STV_INTERNAL",
  [130] = "STV_HIDDEN",
  [128] = "STV_PROTECTED",

 };
 const char *VAR_2 = "unknown sym visibility name";
 if (VAR_0 < FUNC_0(VAR_1)) {
  VAR_2 = VAR_1[VAR_0];
 }
 return VAR_2;
}

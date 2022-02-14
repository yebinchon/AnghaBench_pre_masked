
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 do {
  VAR_3 = (unsigned char)FUNC_0(*VAR_0);
  VAR_4 = (unsigned char)FUNC_0(*VAR_1);
  ++VAR_0, ++VAR_1;
 } while (--VAR_2 && VAR_3 && VAR_3 == VAR_4);

 return VAR_3 - VAR_4;
}

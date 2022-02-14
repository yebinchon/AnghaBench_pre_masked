
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (VAR_5 == 3 && !FUNC_2(VAR_4, "off", VAR_5))
  return VAR_3 ?
   FUNC_1() : -VAR_0;

 if (VAR_5 == 6 && !FUNC_2(VAR_4, "active", VAR_5)) {
  if (VAR_3) {
   if (VAR_3 == &VAR_2)
    return 0;

   VAR_6 = FUNC_1();
   if (VAR_6)
    return VAR_6;
  }

  return FUNC_0(&VAR_2);
 }

 if (VAR_5 == 7 && !FUNC_2(VAR_4, "passive", VAR_5)) {
  if (VAR_3) {
   if (VAR_3 == &VAR_1)
    return 0;

   VAR_6 = FUNC_1();
   if (VAR_6)
    return VAR_6;
  }

  return FUNC_0(&VAR_1);
 }

 return -VAR_0;
}

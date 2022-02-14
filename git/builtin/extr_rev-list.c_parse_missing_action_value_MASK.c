
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_6)
{
 if (!FUNC_0(VAR_6, "error")) {
  VAR_4 = VAR_2;
  return 1;
 }

 if (!FUNC_0(VAR_6, "allow-any")) {
  VAR_4 = VAR_0;
  VAR_5 = 0;
  return 1;
 }

 if (!FUNC_0(VAR_6, "print")) {
  VAR_4 = VAR_3;
  VAR_5 = 0;
  return 1;
 }

 if (!FUNC_0(VAR_6, "allow-promisor")) {
  VAR_4 = VAR_1;
  VAR_5 = 0;
  return 1;
 }

 return 0;
}

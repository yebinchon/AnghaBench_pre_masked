
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t __u8 ;


 size_t FUNC_0 (char const* const*) ;

__attribute__((used)) static const char *FUNC_1(__u8 VAR_0)
{
 static const char * const VAR_1[] = {
  "No sense", "Recovered error", "Not ready",
  "Medium error", "Hardware error", "Illegal request",
  "Unit attention", "Data protect", "Blank check",
 };

 return VAR_0 < FUNC_0(VAR_1) ? VAR_1[VAR_0] : "INVALID";
}

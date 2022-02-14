
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct device {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int FUNC_0 (char const*,scalar_t__,int ,int ,struct device*) ;
 int FUNC_1 (char const*,struct device*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, umode_t VAR_1, kuid_t VAR_2, kgid_t VAR_3,
    struct device *VAR_4)
{
 if (VAR_1)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_0, VAR_4);
}

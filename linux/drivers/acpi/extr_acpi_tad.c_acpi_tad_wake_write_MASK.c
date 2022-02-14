
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, const char *VAR_3, char *VAR_4,
          u32 VAR_5, const char *VAR_6)
{
 u32 VAR_7;

 if (FUNC_2(VAR_3, VAR_6)) {
  VAR_7 = VAR_0;
 } else {
  int VAR_8 = FUNC_1(VAR_3, 0, &VAR_7);

  if (VAR_8)
   return VAR_8;

  if (VAR_7 == VAR_0)
   return -VAR_1;
 }

 return FUNC_0(VAR_2, VAR_4, VAR_5, VAR_7);
}

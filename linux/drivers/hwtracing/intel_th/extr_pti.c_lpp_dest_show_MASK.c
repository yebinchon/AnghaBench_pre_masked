
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pti_device {int lpp_dest; int lpp_dest_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 struct pti_device* FUNC_2 (struct device*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct pti_device *VAR_5 = FUNC_2(VAR_2);
 ssize_t VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = FUNC_0(VAR_1) - 1; VAR_7 >= 0; VAR_7--) {
  const char *VAR_8 = VAR_5->lpp_dest == VAR_7 ? "[%s] " : "%s ";

  if (!(VAR_5->lpp_dest_mask & FUNC_1(VAR_7)))
   continue;

  VAR_6 += FUNC_3(VAR_4 + VAR_6, VAR_0 - VAR_6,
     VAR_8, VAR_1[VAR_7]);
 }

 if (VAR_6)
  VAR_4[VAR_6 - 1] = '\n';

 return VAR_6;
}

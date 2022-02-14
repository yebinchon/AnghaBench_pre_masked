
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct devfreq_dev_profile {int dummy; } ;
struct devfreq {int dummy; } ;


 int VAR_0 ;
 struct devfreq* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct devfreq*) ;
 struct devfreq* FUNC_2 (struct device*,struct devfreq_dev_profile*,char const*,void*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct devfreq**) ;
 struct devfreq** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct devfreq**) ;

struct devfreq *FUNC_6(struct device *VAR_3,
     struct devfreq_dev_profile *VAR_4,
     const char *VAR_5,
     void *VAR_6)
{
 struct devfreq **VAR_7, *VAR_8;

 VAR_7 = FUNC_4(VAR_2, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_5(VAR_7);
  return VAR_8;
 }

 *VAR_7 = VAR_8;
 FUNC_3(VAR_3, VAR_7);

 return VAR_8;
}

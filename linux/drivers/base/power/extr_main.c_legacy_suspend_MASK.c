
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_8__ {int event; } ;
typedef TYPE_1__ pm_message_t ;
typedef int ktime_t ;


 int FUNC_0 (struct device*,int ,int (*) (struct device*,TYPE_1__),int) ;
 int FUNC_1 (struct device*,int (*) (struct device*,TYPE_1__)) ;
 int FUNC_2 (int (*) (struct device*,TYPE_1__),int) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, pm_message_t VAR_1,
     int (*VAR_2)(struct device *VAR_3, pm_message_t VAR_4),
     const char *VAR_5)
{
 int VAR_6;
 ktime_t VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_2);

 FUNC_4(VAR_0, VAR_5, VAR_1.event);
 VAR_6 = VAR_2(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_6);
 FUNC_2(VAR_2, VAR_6);

 FUNC_0(VAR_0, VAR_7, VAR_2, VAR_6);

 return VAR_6;
}

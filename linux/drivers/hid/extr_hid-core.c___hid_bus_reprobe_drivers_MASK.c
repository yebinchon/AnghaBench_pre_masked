
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_driver {int (* match ) (struct hid_device*,int ) ;} ;
struct hid_device {int status; struct hid_driver* driver; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct hid_device*,int ) ;
 int FUNC_3 (int ,int *) ;
 struct hid_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, void *VAR_3)
{
 struct hid_driver *VAR_4 = VAR_3;
 struct hid_device *VAR_5 = FUNC_4(VAR_2);

 if (VAR_5->driver == VAR_4 &&
     !VAR_4->match(VAR_5, VAR_1) &&
     !FUNC_3(FUNC_1(VAR_0), &VAR_5->status))
  return FUNC_0(VAR_2);

 return 0;
}

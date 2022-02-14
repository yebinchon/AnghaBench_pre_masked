
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_driver {scalar_t__ match; } ;
struct device_driver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct hid_driver*,int ) ;
 int VAR_1 ;
 struct hid_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device_driver *VAR_2, void *VAR_3)
{
 struct hid_driver *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->match) {
  FUNC_0(&VAR_1, ((void*)0), VAR_4,
     VAR_0);
 }

 return 0;
}

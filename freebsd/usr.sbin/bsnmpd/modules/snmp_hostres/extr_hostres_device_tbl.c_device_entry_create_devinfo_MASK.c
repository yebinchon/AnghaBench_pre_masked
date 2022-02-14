
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devinfo_dev {int dd_desc; int * dd_location; int * dd_name; } ;
struct device_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 struct device_entry* FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static struct device_entry *
FUNC_2(const struct devinfo_dev *VAR_0)
{

 FUNC_0(VAR_0->dd_name != ((void*)0));
 FUNC_0(VAR_0->dd_location != ((void*)0));

 return (FUNC_1(VAR_0->dd_name, VAR_0->dd_location,
     VAR_0->dd_desc));
}

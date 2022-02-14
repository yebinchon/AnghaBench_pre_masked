
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct devinfo_dev {char* dd_name; char* dd_location; int dd_drivername; int dd_desc; scalar_t__ dd_parent; scalar_t__ dd_handle; } ;
struct device_entry {void* status; int flags; int type; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct device_entry* FUNC_1 (struct devinfo_dev*) ;
 struct device_entry* FUNC_2 (struct devinfo_dev*) ;
 scalar_t__ FUNC_3 (struct devinfo_dev*) ;
 int FUNC_4 (struct devinfo_dev*,int *) ;
 int FUNC_5 (struct devinfo_dev*,int (*) (struct devinfo_dev*,void*),void*) ;

__attribute__((used)) static int
FUNC_6(struct devinfo_dev *VAR_1, void *VAR_2)
{
 struct device_entry *VAR_3;

 FUNC_0("%llu/%llu name='%s' desc='%s' drivername='%s' location='%s'",
     (unsigned long long)VAR_1->dd_handle,
     (unsigned long long)VAR_1->dd_parent, VAR_1->dd_name, VAR_1->dd_desc,
     VAR_1->dd_drivername, VAR_1->dd_location);

 if (VAR_1->dd_name[0] != '\0' || VAR_1->dd_location[0] != '\0') {
  FUNC_0("ANALYZING dev %s at %s",
      VAR_1->dd_name, VAR_1->dd_location);

  if ((VAR_3 = FUNC_2(VAR_1)) != ((void*)0)) {
   VAR_3->flags |= VAR_0;
   VAR_3->status = (u_int)FUNC_3(VAR_1);
  } else if ((VAR_3 = FUNC_1(VAR_1)) != ((void*)0)) {
   FUNC_4(VAR_1, &VAR_3->type);

   VAR_3->flags |= VAR_0;
   VAR_3->status = (u_int)FUNC_3(VAR_1);
  }
 } else {
  FUNC_0("SKIPPED unknown device at location '%s'",
      VAR_1->dd_location );
 }

 return (FUNC_5(VAR_1, FUNC_6, VAR_2));
}

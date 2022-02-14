
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct gendisk {int disk_name; } ;
struct dm_table {int integrity_supported; struct mapped_device* md; scalar_t__ integrity_added; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct gendisk*) ;
 scalar_t__ FUNC_2 (int ,struct gendisk*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct mapped_device*) ;
 struct gendisk* FUNC_6 (struct dm_table*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dm_table *VAR_0)
{
 struct mapped_device *VAR_1 = VAR_0->md;
 struct gendisk *VAR_2 = ((void*)0);


 if (VAR_0->integrity_added)
  return 0;

 VAR_2 = FUNC_6(VAR_0);
 if (!VAR_2)
  return 0;

 if (!FUNC_7(FUNC_5(VAR_1))) {
  VAR_0->integrity_supported = 1;




  FUNC_3(FUNC_5(VAR_1),
           FUNC_1(VAR_2));
  return 0;
 }





 if (FUNC_2(FUNC_5(VAR_1), VAR_2) < 0) {
  FUNC_0("%s: conflict with existing integrity profile: "
         "%s profile mismatch",
         FUNC_4(VAR_0->md),
         VAR_2->disk_name);
  return 1;
 }


 VAR_0->integrity_supported = 1;
 return 0;
}

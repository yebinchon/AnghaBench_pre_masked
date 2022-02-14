
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int md; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dm_table*,int ) ;
 int FUNC_2 (struct dm_table*) ;
 int FUNC_3 (struct dm_table*) ;
 int FUNC_4 (struct dm_table*) ;

int FUNC_5(struct dm_table *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0("unable to determine table type");
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0("unable to build btrees");
  return VAR_1;
 }

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_0("could not register integrity profile.");
  return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0, VAR_0->md);
 if (VAR_1)
  FUNC_0("unable to allocate mempools");

 return VAR_1;
}

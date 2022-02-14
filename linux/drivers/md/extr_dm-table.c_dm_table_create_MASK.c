
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_table {struct mapped_device* md; int mode; int type; int target_callbacks; int devices; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct dm_table*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct dm_table*) ;
 struct dm_table* FUNC_4 (int,int ) ;

int FUNC_5(struct dm_table **VAR_4, fmode_t VAR_5,
      unsigned VAR_6, struct mapped_device *VAR_7)
{
 struct dm_table *VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);

 if (!VAR_8)
  return -VAR_1;

 FUNC_0(&VAR_8->devices);
 FUNC_0(&VAR_8->target_callbacks);

 if (!VAR_6)
  VAR_6 = VAR_3;

 VAR_6 = FUNC_2(VAR_6, VAR_3);

 if (!VAR_6) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }

 if (FUNC_1(VAR_8, VAR_6)) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }

 VAR_8->type = VAR_0;
 VAR_8->mode = VAR_5;
 VAR_8->md = VAR_7;
 *VAR_4 = VAR_8;
 return 0;
}

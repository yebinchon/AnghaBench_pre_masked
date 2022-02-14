
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int changed; int removable; } ;
struct gendisk {struct pd_unit* private_data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pd_unit*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct gendisk *VAR_2, unsigned int VAR_3)
{
 struct pd_unit *VAR_4 = VAR_2->private_data;
 int VAR_5;
 if (!VAR_4->removable)
  return 0;
 FUNC_0(VAR_4, VAR_1);
 VAR_5 = VAR_4->changed;
 VAR_4->changed = 0;
 return VAR_5 ? VAR_0 : 0;
}

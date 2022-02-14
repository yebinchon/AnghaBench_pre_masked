
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_unit {scalar_t__ removable; int access; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pd_unit* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pd_unit*,int ) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_3, fmode_t VAR_4)
{
 struct pd_unit *VAR_5 = VAR_3->bd_disk->private_data;

 FUNC_0(&VAR_2);
 VAR_5->access++;

 if (VAR_5->removable) {
  FUNC_2(VAR_5, VAR_1);
  FUNC_2(VAR_5, VAR_0);
 }
 FUNC_1(&VAR_2);
 return 0;
}

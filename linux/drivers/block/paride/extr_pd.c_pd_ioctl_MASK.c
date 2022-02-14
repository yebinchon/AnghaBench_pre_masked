
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_unit {int access; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pd_unit* private_data; } ;



 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pd_unit*,int ) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_3, fmode_t VAR_4,
  unsigned int VAR_5, unsigned long VAR_6)
{
 struct pd_unit *VAR_7 = VAR_3->bd_disk->private_data;

 switch (VAR_5) {
 case 128:
  FUNC_0(&VAR_2);
  if (VAR_7->access == 1)
   FUNC_2(VAR_7, VAR_1);
  FUNC_1(&VAR_2);
  return 0;
 default:
  return -VAR_0;
 }
}

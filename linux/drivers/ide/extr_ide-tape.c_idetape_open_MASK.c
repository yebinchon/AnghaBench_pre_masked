
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_tape_obj {int dummy; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 struct ide_tape_obj* FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct ide_tape_obj *VAR_4;

 FUNC_1(&VAR_1);
 VAR_4 = FUNC_0(VAR_2->bd_disk, 0, 0);
 FUNC_2(&VAR_1);

 if (!VAR_4)
  return -VAR_0;

 return 0;
}

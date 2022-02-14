
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_tape_obj {int * drive; } ;
struct block_device {int bd_disk; } ;
typedef int ide_drive_t ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct block_device*,unsigned int,unsigned long) ;
 struct ide_tape_obj* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned int,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_3, fmode_t VAR_4,
   unsigned int VAR_5, unsigned long VAR_6)
{
 struct ide_tape_obj *VAR_7 = FUNC_1(VAR_3->bd_disk, VAR_2);
 ide_drive_t *VAR_8 = VAR_7->drive;
 int VAR_9;

 FUNC_3(&VAR_1);
 VAR_9 = FUNC_0(VAR_8, VAR_3, VAR_5, VAR_6);
 if (VAR_9 == -VAR_0)
  VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_6);
 FUNC_4(&VAR_1);

 return VAR_9;
}

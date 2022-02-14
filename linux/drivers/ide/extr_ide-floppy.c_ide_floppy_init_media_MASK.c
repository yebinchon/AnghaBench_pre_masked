
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
typedef int ide_drive_t ;


 int FUNC_0 (int *,struct gendisk*,int) ;
 scalar_t__ FUNC_1 (int *,struct gendisk*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_5(ide_drive_t *VAR_0, struct gendisk *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_1(VAR_0, VAR_1))
  FUNC_0(VAR_0, VAR_1, 1);

 VAR_2 = FUNC_2(VAR_0);

 FUNC_4(VAR_1, FUNC_3(VAR_0));

 return VAR_2;
}

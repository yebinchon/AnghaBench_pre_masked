
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ current_speed; } ;
typedef TYPE_1__ ide_drive_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned long) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4 = (unsigned long)FUNC_2(VAR_2);

 if (VAR_2->current_speed < VAR_1 &&
     (VAR_4 >> 8) != (VAR_4 & VAR_0))
  FUNC_0(VAR_2, VAR_4 & VAR_0);

 return VAR_3;
}

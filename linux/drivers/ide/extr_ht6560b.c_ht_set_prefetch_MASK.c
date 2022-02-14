
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int name; int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_4, u8 VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8 = VAR_0 << 8;

 FUNC_3(&VAR_3, VAR_6);

 VAR_7 = (unsigned long)FUNC_0(VAR_4);




 if (VAR_5) {
  VAR_7 |= VAR_8;
  VAR_4->dev_flags |= VAR_1;
  VAR_4->dev_flags &= ~VAR_2;
 } else {
  VAR_7 &= ~VAR_8;
  VAR_4->dev_flags &= ~VAR_1;
 }

 FUNC_1(VAR_4, (void *)VAR_7);

 FUNC_4(&VAR_3, VAR_6);




}

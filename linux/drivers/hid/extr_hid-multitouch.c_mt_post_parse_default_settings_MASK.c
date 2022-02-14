
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_device {int dummy; } ;
struct mt_application {int quirks; int mt_usages; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mt_device *VAR_5,
        struct mt_application *VAR_6)
{
 __s32 VAR_7 = VAR_6->quirks;


 if (FUNC_0(&VAR_6->mt_usages)) {
  VAR_7 |= VAR_0;
  VAR_7 &= ~VAR_2;
  VAR_7 &= ~VAR_4;
  VAR_7 &= ~VAR_3;
  VAR_7 &= ~VAR_1;
 }

 VAR_6->quirks = VAR_7;
}

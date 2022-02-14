
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int x86_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(bool VAR_6)
{
 u32 VAR_7;
 u64 VAR_8, VAR_9;

 switch (VAR_5.x86_vendor) {
 case 128:
  VAR_7 = VAR_1;
  VAR_8 = VAR_2;
  break;
 case 129:
 case 130:
  VAR_7 = VAR_3;
  VAR_8 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_7, VAR_9);

 if (VAR_6)
  VAR_9 &= ~VAR_8;
 else
  VAR_9 |= VAR_8;

 FUNC_1(VAR_7, VAR_9);
 return 0;
}

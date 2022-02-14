
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct powerdomain {int prcm_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct powerdomain *VAR_7, u8 VAR_8)
{
 u8 VAR_9;

 switch (VAR_8) {
 case 130:
  VAR_9 = VAR_1;
  break;
 case 128:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_5,
       (VAR_9 << VAR_6),
       VAR_7->prcm_offs, VAR_4);
 return 0;
}

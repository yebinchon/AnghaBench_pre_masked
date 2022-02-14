
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipu {int dummy; } ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct ipu*,int ) ;
 int FUNC_1 (struct ipu*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ipu *VAR_3, enum ipu_channel VAR_4)
{
 uint32_t VAR_5, VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_2 | VAR_1;
  break;
 default:
  return;
 }
 VAR_5 = FUNC_0(VAR_3, VAR_0) | VAR_6;
 FUNC_1(VAR_3, VAR_5, VAR_0);
}

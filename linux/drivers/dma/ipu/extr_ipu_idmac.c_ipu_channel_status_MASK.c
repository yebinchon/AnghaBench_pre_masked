
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
 int VAR_3 ;
 int FUNC_0 (struct ipu*,int ) ;

__attribute__((used)) static uint32_t FUNC_1(struct ipu *VAR_4, enum ipu_channel VAR_5)
{
 uint32_t VAR_6 = VAR_1;
 uint32_t VAR_7 = FUNC_0(VAR_4, VAR_0);

 switch (VAR_5) {
 case 130:
  VAR_6 = (VAR_7 & VAR_2) >>
   VAR_3;
  break;
 case 131:
 case 129:
 case 128:
 default:
  break;
 }
 return VAR_6;
}

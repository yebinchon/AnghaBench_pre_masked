
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {int ctrl; } ;
struct ldc_channel {int dummy; } ;


 int FUNC_0 (struct ldc_channel*) ;




 int FUNC_1 (struct ldc_channel*,struct ldc_packet*) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*) ;
 int FUNC_3 (struct ldc_channel*,struct ldc_packet*) ;
 int FUNC_4 (struct ldc_channel*,struct ldc_packet*) ;

__attribute__((used)) static int FUNC_5(struct ldc_channel *VAR_0,
     struct ldc_packet *VAR_1)
{
 switch (VAR_1->ctrl) {
 case 128:
  return FUNC_4(VAR_0, VAR_1);

 case 129:
  return FUNC_3(VAR_0, VAR_1);

 case 130:
  return FUNC_2(VAR_0, VAR_1);

 case 131:
  return FUNC_1(VAR_0, VAR_1);

 default:
  return FUNC_0(VAR_0);
 }
}

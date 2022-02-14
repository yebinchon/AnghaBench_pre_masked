
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {int stype; } ;
struct ldc_channel {int dummy; } ;


 int FUNC_0 (struct ldc_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ldc_channel*,struct ldc_packet*) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_2, struct ldc_packet *VAR_3)
{
 if (VAR_3->stype & VAR_0) {
  int VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
 }
 if (VAR_3->stype & VAR_1)
  return FUNC_0(VAR_2);

 return 0;
}

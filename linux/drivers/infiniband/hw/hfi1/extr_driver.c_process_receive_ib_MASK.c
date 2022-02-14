
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {int rhf; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_packet*) ;
 int FUNC_1 (struct hfi1_packet*) ;
 int FUNC_2 (struct hfi1_packet*) ;
 scalar_t__ FUNC_3 (struct hfi1_packet*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hfi1_packet*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hfi1_packet *VAR_1)
{
 if (FUNC_3(VAR_1))
  return VAR_0;

 if (FUNC_6(FUNC_1(VAR_1)))
  return VAR_0;

 FUNC_5(VAR_1);

 if (FUNC_6(FUNC_4(VAR_1->rhf))) {
  FUNC_0(VAR_1);
  return VAR_0;
 }

 FUNC_2(VAR_1);
 return VAR_0;
}

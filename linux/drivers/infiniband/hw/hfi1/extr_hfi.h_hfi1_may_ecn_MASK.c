
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {scalar_t__ etype; int ohdr; int hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline bool FUNC_4(struct hfi1_packet *VAR_1)
{
 bool VAR_2, VAR_3;

 if (VAR_1->etype == VAR_0) {
  VAR_2 = FUNC_1(VAR_1->hdr);
  VAR_3 = FUNC_0(VAR_1->hdr);
 } else {
  VAR_2 = FUNC_3(VAR_1->ohdr);
  VAR_3 = FUNC_2(VAR_1->ohdr);
 }
 return VAR_2 || VAR_3;
}

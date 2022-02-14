
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int port_cap_flags; } ;
struct qib_ibport {int* sl_to_vl; TYPE_1__ rvp; } ;
struct ib_smp {int status; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ib_smp*) ;
 int FUNC_4 (struct ib_smp*,struct ib_device*,int) ;
 struct qib_ibport* FUNC_5 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_6(struct ib_smp *VAR_3, struct ib_device *VAR_4,
        u8 VAR_5)
{
 struct qib_ibport *VAR_6 = FUNC_5(VAR_4, VAR_5);
 u8 *VAR_7 = (u8 *) VAR_3->data;
 unsigned VAR_8;

 if (!(VAR_6->rvp.port_cap_flags & VAR_0)) {
  VAR_3->status |= VAR_1;
  return FUNC_3(VAR_3);
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->sl_to_vl); VAR_8 += 2, VAR_7++) {
  VAR_6->sl_to_vl[VAR_8] = *VAR_7 >> 4;
  VAR_6->sl_to_vl[VAR_8 + 1] = *VAR_7 & 0xF;
 }
 FUNC_2(FUNC_1(FUNC_5(VAR_4, VAR_5)),
       VAR_2);

 return FUNC_4(VAR_3, VAR_4, VAR_5);
}

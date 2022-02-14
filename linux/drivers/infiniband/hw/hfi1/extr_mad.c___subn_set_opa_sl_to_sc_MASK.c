
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_ibport {scalar_t__* sl_to_sc; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (struct opa_smp*,scalar_t__,scalar_t__*,struct ib_device*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct hfi1_ibport*,int) ;
 int FUNC_3 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_4 (size_t,scalar_t__) ;
 struct hfi1_ibport* FUNC_5 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct opa_smp *VAR_1, u32 VAR_2, u8 *VAR_3,
       struct ib_device *VAR_4, u8 VAR_5,
       u32 *VAR_6, u32 VAR_7)
{
 struct hfi1_ibport *VAR_8 = FUNC_5(VAR_4, VAR_5);
 u8 *VAR_9 = VAR_3;
 size_t VAR_10 = FUNC_0(VAR_8->sl_to_sc);
 int VAR_11;
 u8 VAR_12;

 if (VAR_2 || FUNC_4(VAR_10, VAR_7)) {
  VAR_1->status |= VAR_0;
  return FUNC_3((struct ib_mad_hdr *)VAR_1);
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8->sl_to_sc); VAR_11++) {
  VAR_12 = *VAR_9++;
  if (VAR_8->sl_to_sc[VAR_11] != VAR_12) {
   VAR_8->sl_to_sc[VAR_11] = VAR_12;


   FUNC_2(VAR_8, VAR_11);
  }
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_ibport {int * sl_to_sc; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_2 (size_t,size_t) ;
 struct hfi1_ibport* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct opa_smp *VAR_1, u32 VAR_2, u8 *VAR_3,
       struct ib_device *VAR_4, u8 VAR_5,
       u32 *VAR_6, u32 VAR_7)
{
 struct hfi1_ibport *VAR_8 = FUNC_3(VAR_4, VAR_5);
 u8 *VAR_9 = VAR_3;
 size_t VAR_10 = FUNC_0(VAR_8->sl_to_sc);
 unsigned VAR_11;

 if (VAR_2 || FUNC_2(VAR_10, VAR_7)) {
  VAR_1->status |= VAR_0;
  return FUNC_1((struct ib_mad_hdr *)VAR_1);
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8->sl_to_sc); VAR_11++)
  *VAR_9++ = VAR_8->sl_to_sc[VAR_11];

 if (VAR_6)
  *VAR_6 += VAR_10;

 return FUNC_1((struct ib_mad_hdr *)VAR_1);
}

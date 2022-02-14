
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_packet {int rhf; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_ctxtdata {int ctxt; int dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int,char*,char*,char*,char*,char*,char*,char*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_packet *VAR_7)
{
 struct hfi1_ctxtdata *VAR_8 = VAR_7->rcd;
 u32 VAR_9 = FUNC_1(VAR_7->rhf);

 FUNC_0(VAR_8->dd,
     "receive context %d: rhf 0x%016llx, errs [ %s%s%s%s%s%s%s] rte 0x%x\n",
     VAR_8->ctxt, VAR_7->rhf,
     VAR_7->rhf & VAR_4 ? "k_hdr_len " : "",
     VAR_7->rhf & VAR_1 ? "dc_unc " : "",
     VAR_7->rhf & VAR_0 ? "dc " : "",
     VAR_7->rhf & VAR_6 ? "tid " : "",
     VAR_7->rhf & VAR_5 ? "len " : "",
     VAR_7->rhf & VAR_2 ? "ecc " : "",
     VAR_7->rhf & VAR_3 ? "icrc " : "",
     VAR_9);
}

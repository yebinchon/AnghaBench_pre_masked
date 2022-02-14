
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_rmpp_hdr {int rmpp_type; int paylen_newwin; int seg_num; int rmpp_status; int rmpp_version; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ib_rmpp_hdr*) ;
 int FUNC_4 (struct ib_rmpp_hdr*) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static void FUNC_6(struct ib_rmpp_hdr *VAR_0)
{
 FUNC_5("RMPP version...0x%01x\n", VAR_0->rmpp_version);
 FUNC_5("RMPP type......0x%01x (%s)\n", VAR_0->rmpp_type,
        FUNC_2(VAR_0->rmpp_type));
 FUNC_5("RMPP RRespTime.0x%01x\n", FUNC_4(VAR_0));
 FUNC_5("RMPP flags.....0x%01x (%s)\n", FUNC_3(VAR_0),
        FUNC_1(FUNC_3(VAR_0)));
 FUNC_5("RMPP status....0x%01x\n", VAR_0->rmpp_status);
 FUNC_5("Seg number.....0x%04x\n", FUNC_0(VAR_0->seg_num));
 switch (VAR_0->rmpp_type) {
 case 128:
  FUNC_5("Payload len....0x%04x\n",
         FUNC_0(VAR_0->paylen_newwin));
  break;
 case 129:
  FUNC_5("New window.....0x%04x\n",
         FUNC_0(VAR_0->paylen_newwin));
  break;
 default:
  FUNC_5("Data 2.........0x%04x\n",
         FUNC_0(VAR_0->paylen_newwin));
  break;
 }
}

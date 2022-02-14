
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_comn_req_hdr {int serv_specif_flags; int comn_req_flags; int service_type; int hdr_flags; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct icp_qat_fw_comn_req_hdr*) ;
 int FUNC_5 (struct icp_qat_fw_comn_req_hdr*) ;

__attribute__((used)) static void FUNC_6(struct icp_qat_fw_comn_req_hdr *VAR_6,
        int VAR_7)
{
 VAR_6->hdr_flags =
  FUNC_1(VAR_1);
 VAR_6->service_type = VAR_0;
 VAR_6->comn_req_flags =
  FUNC_0(VAR_4,
         VAR_5);
 FUNC_2(VAR_6->serv_specif_flags,
      VAR_3);
 if (VAR_7)
  FUNC_5(VAR_6);
 else
  FUNC_4(VAR_6);
 FUNC_3(VAR_6->serv_specif_flags,
    VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ishtp_hbm_cl_cmd {int fw_addr; int host_addr; int hbm_cmd; } ;
struct ishtp_cl {int fw_client_id; int host_client_id; } ;


 int FUNC_0 (struct ishtp_hbm_cl_cmd*,int ,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct ishtp_cl *VAR_0, uint8_t VAR_1,
 void *VAR_2, size_t VAR_3)
{
 struct ishtp_hbm_cl_cmd *VAR_4 = VAR_2;

 FUNC_0(VAR_4, 0, VAR_3);

 VAR_4->hbm_cmd = VAR_1;
 VAR_4->host_addr = VAR_0->host_client_id;
 VAR_4->fw_addr = VAR_0->fw_client_id;
}

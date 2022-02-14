
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_hbm_cl_cmd {scalar_t__ host_addr; scalar_t__ fw_addr; } ;
struct ishtp_cl {scalar_t__ host_client_id; scalar_t__ fw_client_id; } ;



__attribute__((used)) static inline bool FUNC_0(struct ishtp_cl *VAR_0, void *VAR_1)
{
 struct ishtp_hbm_cl_cmd *VAR_2 = VAR_1;

 return VAR_0->host_client_id == VAR_2->host_addr &&
  VAR_0->fw_client_id == VAR_2->fw_addr;
}

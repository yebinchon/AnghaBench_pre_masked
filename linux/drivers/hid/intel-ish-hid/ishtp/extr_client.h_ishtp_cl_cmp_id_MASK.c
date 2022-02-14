
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl {scalar_t__ host_client_id; scalar_t__ fw_client_id; } ;



__attribute__((used)) static inline bool FUNC_0(const struct ishtp_cl *VAR_0,
       const struct ishtp_cl *VAR_1)
{
 return VAR_0 && VAR_1 &&
  (VAR_0->host_client_id == VAR_1->host_client_id) &&
  (VAR_0->fw_client_id == VAR_1->fw_client_id);
}

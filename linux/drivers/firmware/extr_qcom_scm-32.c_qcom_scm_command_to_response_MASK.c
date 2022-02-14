
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void qcom_scm_response ;
struct qcom_scm_command {int resp_hdr_offset; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct qcom_scm_response *FUNC_1(
  const struct qcom_scm_command *VAR_0)
{
 return (void *)VAR_0 + FUNC_0(VAR_0->resp_hdr_offset);
}

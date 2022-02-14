
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_scm_response {int buf_offset; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void *FUNC_1(const struct qcom_scm_response *VAR_0)
{
 return (void *)VAR_0 + FUNC_0(VAR_0->buf_offset);
}

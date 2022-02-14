
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_scm_response {int buf_offset; int is_complete; } ;
struct qcom_scm_command {void* id; void* resp_hdr_offset; void* buf_offset; void* len; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct device*,struct qcom_scm_command*,size_t,int ) ;
 scalar_t__ FUNC_3 (struct device*,scalar_t__) ;
 int FUNC_4 (struct device*,scalar_t__,size_t,int ) ;
 int FUNC_5 (struct device*,scalar_t__,size_t,int ) ;
 int FUNC_6 (struct qcom_scm_command*) ;
 struct qcom_scm_command* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (void*,void const*,size_t) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct qcom_scm_response* FUNC_12 (struct qcom_scm_command*) ;
 void* FUNC_13 (struct qcom_scm_command*) ;
 void const* FUNC_14 (struct qcom_scm_response*) ;
 int VAR_4 ;
 int FUNC_15 (int) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_5, u32 VAR_6, u32 VAR_7,
    const void *VAR_8, size_t VAR_9, void *VAR_10,
    size_t VAR_11)
{
 int VAR_12;
 struct qcom_scm_command *VAR_13;
 struct qcom_scm_response *VAR_14;
 size_t VAR_15 = sizeof(*VAR_13) + VAR_9 + sizeof(*VAR_14) + VAR_11;
 dma_addr_t VAR_16;

 VAR_13 = FUNC_7(FUNC_0(VAR_15), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->len = FUNC_1(VAR_15);
 VAR_13->buf_offset = FUNC_1(sizeof(*VAR_13));
 VAR_13->resp_hdr_offset = FUNC_1(sizeof(*VAR_13) + VAR_9);

 VAR_13->id = FUNC_1((VAR_6 << 10) | VAR_7);
 if (VAR_8)
  FUNC_9(FUNC_13(VAR_13), VAR_8, VAR_9);

 VAR_14 = FUNC_12(VAR_13);

 VAR_16 = FUNC_2(VAR_5, VAR_13, VAR_15, VAR_1);
 if (FUNC_3(VAR_5, VAR_16)) {
  FUNC_6(VAR_13);
  return -VAR_2;
 }

 FUNC_10(&VAR_4);
 VAR_12 = FUNC_16(VAR_16);
 if (VAR_12 < 0)
  VAR_12 = FUNC_15(VAR_12);
 FUNC_11(&VAR_4);
 if (VAR_12)
  goto out;

 do {
  FUNC_4(VAR_5, VAR_16 + sizeof(*VAR_13) + VAR_9,
     sizeof(*VAR_14), VAR_0);
 } while (!VAR_14->is_complete);

 if (VAR_10) {
  FUNC_4(VAR_5, VAR_16 + sizeof(*VAR_13) + VAR_9 +
     FUNC_8(VAR_14->buf_offset),
     VAR_11, VAR_0);
  FUNC_9(VAR_10, FUNC_14(VAR_14),
         VAR_11);
 }
out:
 FUNC_5(VAR_5, VAR_16, VAR_15, VAR_1);
 FUNC_6(VAR_13);
 return VAR_12;
}

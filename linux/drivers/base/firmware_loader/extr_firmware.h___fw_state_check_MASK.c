
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_state {int status; } ;
struct fw_priv {struct fw_state fw_st; } ;
typedef enum fw_status { ____Placeholder_fw_status } fw_status ;



__attribute__((used)) static inline bool FUNC_0(struct fw_priv *VAR_0,
        enum fw_status VAR_1)
{
 struct fw_state *VAR_2 = &VAR_0->fw_st;

 return VAR_2->status == VAR_1;
}

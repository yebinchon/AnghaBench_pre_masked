
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_state {int completion; int status; } ;
struct fw_priv {struct fw_state fw_st; } ;
typedef enum fw_status { ____Placeholder_fw_status } fw_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct fw_priv *VAR_2,
      enum fw_status VAR_3)
{
 struct fw_state *VAR_4 = &VAR_2->fw_st;

 FUNC_0(VAR_4->status, VAR_3);

 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  FUNC_1(&VAR_4->completion);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct creq_deinitialize_fw_resp {int dummy; } ;
struct cmdq_deinitialize_fw {int dummy; } ;
struct bnxt_qplib_rcfw {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmdq_deinitialize_fw,int ,int ) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,void*,void*,int *,int ) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct bnxt_qplib_rcfw *VAR_2)
{
 struct cmdq_deinitialize_fw VAR_3;
 struct creq_deinitialize_fw_resp VAR_4;
 u16 VAR_5 = 0;
 int VAR_6;

 FUNC_0(VAR_3, VAR_0, VAR_5);
 VAR_6 = FUNC_1(VAR_2, (void *)&VAR_3, (void *)&VAR_4,
       ((void*)0), 0);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_1, &VAR_2->flags);
 return 0;
}

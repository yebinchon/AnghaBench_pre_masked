
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct creq_query_version_resp {char fw_maj; char fw_minor; char fw_bld; char fw_rsvd; } ;
struct cmdq_query_version {int dummy; } ;
struct bnxt_qplib_rcfw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdq_query_version,int ,int ) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,void*,void*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct bnxt_qplib_rcfw *VAR_1,
         char *VAR_2)
{
 struct cmdq_query_version VAR_3;
 struct creq_query_version_resp VAR_4;
 u16 VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_0(VAR_3, VAR_0, VAR_5);

 VAR_6 = FUNC_1(VAR_1, (void *)&VAR_3,
       (void *)&VAR_4, ((void*)0), 0);
 if (VAR_6)
  return;
 VAR_2[0] = VAR_4.fw_maj;
 VAR_2[1] = VAR_4.fw_minor;
 VAR_2[2] = VAR_4.fw_bld;
 VAR_2[3] = VAR_4.fw_rsvd;
}

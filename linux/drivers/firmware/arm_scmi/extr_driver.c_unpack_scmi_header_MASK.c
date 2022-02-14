
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_msg_hdr {int protocol_id; int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(u32 VAR_0, struct scmi_msg_hdr *VAR_1)
{
 VAR_1->id = FUNC_0(VAR_0);
 VAR_1->protocol_id = FUNC_1(VAR_0);
}

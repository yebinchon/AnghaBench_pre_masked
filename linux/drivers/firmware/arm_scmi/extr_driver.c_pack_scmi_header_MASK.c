
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_msg_hdr {int protocol_id; int seq; int id; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u32 FUNC_1(struct scmi_msg_hdr *VAR_3)
{
 return FUNC_0(VAR_0, VAR_3->id) |
  FUNC_0(VAR_2, VAR_3->seq) |
  FUNC_0(VAR_1, VAR_3->protocol_id);
}

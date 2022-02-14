
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_msg_hdr {int protocol_id; int seq; int id; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_0,
     struct scmi_msg_hdr *VAR_1)
{
 FUNC_0(VAR_0, "Message ID: %x Sequence ID: %x Protocol: %x\n",
  VAR_1->id, VAR_1->seq, VAR_1->protocol_id);
}

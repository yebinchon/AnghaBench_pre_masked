
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_msg_hdr {int flags; int seq; int host; int type; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_0,
       struct ti_sci_msg_hdr *VAR_1)
{
 FUNC_0(VAR_0, "MSGHDR:type=0x%04x host=0x%02x seq=0x%02x flags=0x%08x\n",
  VAR_1->type, VAR_1->host, VAR_1->seq, VAR_1->flags);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ishtp_msg_hdr {scalar_t__ length; int host_addr; int fw_addr; } ;
struct ishtp_device {scalar_t__ mtu; int devc; scalar_t__ ishtp_msg_hdr; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sync_fw_clock ) (struct ishtp_device*) ;scalar_t__ (* ishtp_read_hdr ) (struct ishtp_device*) ;} ;


 int FUNC_0 (int ,char*,unsigned int,scalar_t__) ;
 int FUNC_1 (struct ishtp_device*,struct ishtp_msg_hdr*) ;
 int FUNC_2 (struct ishtp_device*,struct ishtp_msg_hdr*) ;
 int FUNC_3 (struct ishtp_device*,struct ishtp_msg_hdr*) ;
 scalar_t__ FUNC_4 (struct ishtp_device*) ;
 int FUNC_5 (struct ishtp_device*) ;

void FUNC_6(struct ishtp_device *VAR_0)
{
 uint32_t VAR_1;
 struct ishtp_msg_hdr *VAR_2;


 VAR_1 = VAR_0->ops->ishtp_read_hdr(VAR_0);
 if (!VAR_1)
  return;

 VAR_0->ops->sync_fw_clock(VAR_0);

 VAR_2 = (struct ishtp_msg_hdr *)&VAR_1;
 VAR_0->ishtp_msg_hdr = VAR_1;


 if (VAR_2->length > VAR_0->mtu) {
  FUNC_0(VAR_0->devc,
   "ISHTP hdr - bad length: %u; dropped [%08X]\n",
   (unsigned int)VAR_2->length, VAR_1);
  return;
 }


 if (!VAR_2->host_addr && !VAR_2->fw_addr)
  FUNC_2(VAR_0, VAR_2);

 else if (!VAR_2->host_addr)
  FUNC_1(VAR_0, VAR_2);
 else

  FUNC_3(VAR_0, VAR_2);
}

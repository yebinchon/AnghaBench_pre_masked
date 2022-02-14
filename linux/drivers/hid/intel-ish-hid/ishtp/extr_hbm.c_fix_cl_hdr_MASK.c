
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ishtp_msg_hdr {size_t length; int msg_complete; scalar_t__ reserved; int fw_addr; scalar_t__ host_addr; } ;



__attribute__((used)) static inline void FUNC_0(struct ishtp_msg_hdr *VAR_0, size_t VAR_1,
 uint8_t VAR_2)
{
 VAR_0->host_addr = 0;
 VAR_0->fw_addr = VAR_2;
 VAR_0->length = VAR_1;
 VAR_0->msg_complete = 1;
 VAR_0->reserved = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct ishtp_device*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct ishtp_device *VAR_1, unsigned char *VAR_2,
 unsigned long VAR_3)
{
 uint32_t VAR_4;
 uint32_t *VAR_5 = (uint32_t *)VAR_2;
 uint32_t VAR_6;

 VAR_6 = VAR_0 + sizeof(struct ishtp_msg_hdr);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += sizeof(uint32_t))
  *VAR_5++ = FUNC_0(VAR_1, VAR_6 + VAR_4);

 return 0;
}

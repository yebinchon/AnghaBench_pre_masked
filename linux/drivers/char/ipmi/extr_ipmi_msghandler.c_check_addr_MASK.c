
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi {TYPE_1__* addrinfo; } ;
struct ipmi_addr {size_t channel; } ;
struct TYPE_2__ {unsigned char lun; unsigned char address; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;

__attribute__((used)) static int FUNC_1(struct ipmi_smi *VAR_2,
        struct ipmi_addr *VAR_3,
        unsigned char *VAR_4,
        unsigned char *VAR_5)
{
 if (VAR_3->channel >= VAR_1)
  return -VAR_0;
 VAR_3->channel = FUNC_0(VAR_3->channel, VAR_1);
 *VAR_5 = VAR_2->addrinfo[VAR_3->channel].lun;
 *VAR_4 = VAR_2->addrinfo[VAR_3->channel].address;
 return 0;
}

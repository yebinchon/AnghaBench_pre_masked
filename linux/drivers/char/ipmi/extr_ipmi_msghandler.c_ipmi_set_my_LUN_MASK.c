
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipmi_user {TYPE_2__* intf; } ;
struct TYPE_4__ {TYPE_1__* addrinfo; } ;
struct TYPE_3__ {unsigned char lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct ipmi_user* FUNC_0 (struct ipmi_user*,int*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct ipmi_user*,int) ;

int FUNC_3(struct ipmi_user *VAR_3,
      unsigned int VAR_4,
      unsigned char VAR_5)
{
 int VAR_6, VAR_7 = 0;

 VAR_3 = FUNC_0(VAR_3, &VAR_6);
 if (!VAR_3)
  return -VAR_1;

 if (VAR_4 >= VAR_2) {
  VAR_7 = -VAR_0;
 } else {
  VAR_4 = FUNC_1(VAR_4, VAR_2);
  VAR_3->intf->addrinfo[VAR_4].lun = VAR_5 & 0x3;
 }
 FUNC_2(VAR_3, VAR_6);

 return VAR_7;
}

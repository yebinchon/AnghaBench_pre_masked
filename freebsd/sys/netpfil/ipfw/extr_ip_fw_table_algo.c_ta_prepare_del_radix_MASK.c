
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tentry_info {int masklen; scalar_t__ subtype; } ;
struct TYPE_5__ {int ma; int sa; } ;
struct TYPE_4__ {int ma; int sa; } ;
struct TYPE_6__ {TYPE_2__ a6; TYPE_1__ a4; } ;
struct ta_buf_radix {struct sockaddr* mask_ptr; struct sockaddr* addr_ptr; TYPE_3__ addr; } ;
struct sockaddr {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tentry_info*,struct sockaddr*,struct sockaddr*,int*) ;

__attribute__((used)) static int
FUNC_1(struct ip_fw_chain *VAR_3, struct tentry_info *VAR_4,
    void *VAR_5)
{
 struct ta_buf_radix *VAR_6;
 struct sockaddr *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = (struct ta_buf_radix *)VAR_5;

 VAR_9 = VAR_4->masklen;
 VAR_10 = 0;

 if (VAR_4->subtype == VAR_0) {
  if (VAR_9 > 32)
   return (VAR_2);

  VAR_7 = (struct sockaddr *)&VAR_6->addr.a4.sa;
  VAR_8 = (struct sockaddr *)&VAR_6->addr.a4.ma;
 } else
  return (VAR_2);

 FUNC_0(VAR_4, VAR_7, VAR_8, &VAR_10);
 VAR_6->addr_ptr = VAR_7;
 if (VAR_10 != 0)
  VAR_6->mask_ptr = VAR_8;

 return (0);
}

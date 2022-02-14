
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tentry_info {int masklen; scalar_t__ subtype; } ;
struct TYPE_5__ {int ma; } ;
struct TYPE_4__ {int ma; } ;
struct TYPE_6__ {TYPE_2__ a6; TYPE_1__ a4; } ;
struct ta_buf_radix {struct sockaddr* mask_ptr; struct sockaddr* addr_ptr; struct radix_addr_xentry* ent_ptr; TYPE_3__ addr; } ;
struct sockaddr {int dummy; } ;
struct radix_addr_xentry {int masklen; int addr6; int addr; } ;
struct radix_addr_entry {int masklen; int addr6; int addr; } ;
struct ip_fw_chain {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct tentry_info*,struct sockaddr*,struct sockaddr*,int*) ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_chain *VAR_6, struct tentry_info *VAR_7,
    void *VAR_8)
{
 struct ta_buf_radix *VAR_9;
 struct radix_addr_entry *VAR_10;



 struct sockaddr *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = (struct ta_buf_radix *)VAR_8;

 VAR_13 = VAR_7->masklen;
 VAR_14 = 0;

 if (VAR_7->subtype == VAR_0) {
 } else {

  return (VAR_2);
 }

 FUNC_1(VAR_7, VAR_11, VAR_12, &VAR_14);

 VAR_9->addr_ptr = VAR_11;
 if (VAR_14 != 0)
  VAR_9->mask_ptr = VAR_12;

 return (0);
}

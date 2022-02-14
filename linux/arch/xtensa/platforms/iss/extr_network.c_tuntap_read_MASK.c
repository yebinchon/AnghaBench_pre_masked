
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_4__* dev; int data; } ;
struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ tuntap; } ;
struct TYPE_7__ {TYPE_2__ info; } ;
struct iss_net_private {TYPE_3__ tp; } ;
struct TYPE_8__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct iss_net_private *VAR_1, struct sk_buff **VAR_2)
{
 return FUNC_0(VAR_1->tp.info.tuntap.fd,
   (*VAR_2)->data, (*VAR_2)->dev->mtu + VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ dst_port; int flags; scalar_t__ dst_addr; int protocol; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;
struct filter {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(struct filter *VAR_5,
      uint32_t VAR_6, uint16_t VAR_7)
{
 VAR_5->type = VAR_3;
 VAR_5->u.ipv4.flags = VAR_2;
 VAR_5->u.ipv4.protocol = VAR_4;

 if (VAR_6) {
  VAR_5->u.ipv4.flags |= VAR_0;
  VAR_5->u.ipv4.dst_addr = VAR_6;
 }

 if (VAR_7) {
  VAR_5->u.ipv4.flags |= VAR_1;
  VAR_5->u.ipv4.dst_port = VAR_7;
 }
}

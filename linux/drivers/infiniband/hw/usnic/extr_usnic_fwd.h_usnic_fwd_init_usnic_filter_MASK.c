
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int flags; int proto_version; int usnic_id; int ethtype; } ;
struct TYPE_3__ {TYPE_2__ usnic; } ;
struct filter {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline void FUNC_0(struct filter *VAR_8,
      uint32_t VAR_9)
{
 VAR_8->type = VAR_4;
 VAR_8->u.usnic.ethtype = VAR_0;
 VAR_8->u.usnic.flags = VAR_1 |
    VAR_2 |
    VAR_3;
 VAR_8->u.usnic.proto_version = (VAR_6 <<
      VAR_7) |
      VAR_5;
 VAR_8->u.usnic.usnic_id = VAR_9;
}

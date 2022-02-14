
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_attr {int lid; int port_cap_flags; int gid_tbl_len; int pkey_tbl_len; int active_speed; int max_msg_sz; int active_width; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct ib_device *VAR_6,
       u8 VAR_7,
       struct ib_port_attr *VAR_8)
{
 VAR_8->lid = 1;
 VAR_8->port_cap_flags = VAR_2 | VAR_3 |
  VAR_4 | VAR_1;
 VAR_8->gid_tbl_len = 1;
 VAR_8->pkey_tbl_len = 1;
 VAR_8->active_width = VAR_5;
 VAR_8->active_speed = 1;
 VAR_8->max_msg_sz = VAR_0;
 return 0;
}

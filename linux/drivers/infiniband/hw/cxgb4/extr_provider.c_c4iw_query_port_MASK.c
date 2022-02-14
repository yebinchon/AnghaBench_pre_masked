
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_attr {int port_cap_flags; int gid_tbl_len; int pkey_tbl_len; int active_width; int max_msg_sz; int active_speed; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,struct ib_device*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_7, u8 VAR_8,
      struct ib_port_attr *VAR_9)
{
 FUNC_0("ibdev %p\n", VAR_7);

 VAR_9->port_cap_flags =
     VAR_1 |
     VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_5 | VAR_0;
 VAR_9->gid_tbl_len = 1;
 VAR_9->pkey_tbl_len = 1;
 VAR_9->active_width = 2;
 VAR_9->active_speed = VAR_6;
 VAR_9->max_msg_sz = -1;

 return 0;
}

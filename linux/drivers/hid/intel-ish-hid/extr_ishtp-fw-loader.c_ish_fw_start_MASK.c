
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int command; } ;
struct loader_start {TYPE_1__ hdr; } ;
struct loader_msg_hdr {int dummy; } ;
struct ishtp_cl_data {int dummy; } ;
typedef int ldr_start_ack ;
typedef int ldr_start ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_cl_data*,int *,int,int *,int) ;
 int FUNC_1 (struct loader_start*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ishtp_cl_data *VAR_1)
{
 struct loader_start VAR_2;
 struct loader_msg_hdr VAR_3;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.hdr.command = VAR_0;
 return FUNC_0(VAR_1,
       (u8 *)&VAR_2,
       sizeof(VAR_2),
       (u8 *)&VAR_3,
       sizeof(VAR_3));
}

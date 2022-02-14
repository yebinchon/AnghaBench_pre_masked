
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int dummy; } ;
struct TYPE_2__ {int cmd; } ;
struct ish_system_states_query_subscribers {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ishtp_msg_hdr*,size_t const,int ) ;
 int FUNC_1 (struct ishtp_device*,struct ishtp_msg_hdr*,unsigned char*) ;
 int FUNC_2 (struct ish_system_states_query_subscribers*,int ,size_t const) ;

void FUNC_3(struct ishtp_device *VAR_2)
{
 struct ishtp_msg_hdr VAR_3;
 struct ish_system_states_query_subscribers VAR_4;
 const size_t VAR_5 = sizeof(struct ish_system_states_query_subscribers);

 FUNC_0(&VAR_3, VAR_5, VAR_0);

 FUNC_2(&VAR_4, 0, VAR_5);
 VAR_4.hdr.cmd = VAR_1;

 FUNC_1(VAR_2, &VAR_3,
  (unsigned char *)&VAR_4);
}

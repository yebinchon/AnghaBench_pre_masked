
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int dummy; } ;
struct packet_command {int* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packet_command*,int *,int ,int ) ;
 int FUNC_1 (struct pktcdvd_device*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct pktcdvd_device *VAR_2, int VAR_3)
{
 struct packet_command VAR_4;

 FUNC_0(&VAR_4, ((void*)0), 0, VAR_0);
 VAR_4.cmd[0] = VAR_1;
 VAR_4.cmd[4] = VAR_3 ? 1 : 0;
 return FUNC_1(VAR_2, &VAR_4);
}

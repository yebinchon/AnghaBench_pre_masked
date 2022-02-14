
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsi_slave {int id; int link; int master; int t_echo_delay; int t_send_delay; } ;
typedef int data ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int *,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fsi_slave *VAR_2)
{
 uint32_t VAR_3;
 __be32 VAR_4;




 VAR_3 = FUNC_2(VAR_2->id, VAR_2->t_send_delay, VAR_2->t_echo_delay);
 VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2->master, VAR_2->link, VAR_2->id,
    VAR_0 + VAR_1,
    &VAR_4, sizeof(VAR_4));
}

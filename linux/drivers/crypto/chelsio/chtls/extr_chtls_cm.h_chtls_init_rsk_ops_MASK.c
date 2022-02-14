
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_request_sock {int dummy; } ;
struct request_sock_ops {int family; int obj_size; int slab; int destructor; } ;
struct proto {struct request_sock_ops* rsk_prot; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_sock_ops*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct proto *VAR_1,
          struct request_sock_ops *VAR_2,
          struct proto *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->family = VAR_4;
 VAR_2->obj_size = sizeof(struct tcp_request_sock);
 VAR_2->destructor = VAR_0;
 VAR_2->slab = VAR_3->rsk_prot->slab;
 VAR_1->rsk_prot = VAR_2;
}

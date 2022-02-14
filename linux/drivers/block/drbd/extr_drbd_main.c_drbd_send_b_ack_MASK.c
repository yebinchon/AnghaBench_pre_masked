
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct p_barrier_ack {int set_size; int barrier; } ;
struct drbd_socket {int dummy; } ;
struct drbd_connection {scalar_t__ cstate; struct drbd_socket meta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct p_barrier_ack* FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (struct drbd_connection*,struct drbd_socket*,int ,int,int *,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct drbd_connection *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct drbd_socket *VAR_5;
 struct p_barrier_ack *VAR_6;

 if (VAR_2->cstate < VAR_0)
  return;

 VAR_5 = &VAR_2->meta;
 VAR_6 = FUNC_0(VAR_2, VAR_5);
 if (!VAR_6)
  return;
 VAR_6->barrier = VAR_3;
 VAR_6->set_size = FUNC_2(VAR_4);
 FUNC_1(VAR_2, VAR_5, VAR_1, sizeof(*VAR_6), ((void*)0), 0);
}

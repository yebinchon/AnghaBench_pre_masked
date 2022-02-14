
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {int i; } ;
struct p_req_state {void* val; void* mask; } ;
struct drbd_socket {int dummy; } ;
struct drbd_connection {int agreed_pro_version; struct drbd_socket data; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct p_req_state* FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (struct drbd_connection*,struct drbd_socket*,int,int,int *,int ) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct drbd_connection *VAR_3, union drbd_state VAR_4, union drbd_state VAR_5)
{
 enum drbd_packet VAR_6;
 struct drbd_socket *VAR_7;
 struct p_req_state *VAR_8;

 VAR_6 = VAR_3->agreed_pro_version < 100 ? VAR_2 : VAR_1;
 VAR_7 = &VAR_3->data;
 VAR_8 = FUNC_0(VAR_3, VAR_7);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->mask = FUNC_2(VAR_4.i);
 VAR_8->val = FUNC_2(VAR_5.i);
 return FUNC_1(VAR_3, VAR_7, VAR_6, sizeof(*VAR_8), ((void*)0), 0);
}

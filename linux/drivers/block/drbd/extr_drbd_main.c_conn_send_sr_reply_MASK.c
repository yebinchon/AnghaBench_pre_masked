
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_req_state_reply {int retcode; } ;
struct drbd_socket {int dummy; } ;
struct drbd_connection {int agreed_pro_version; struct drbd_socket meta; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 int VAR_1 ;
 struct p_req_state_reply* FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (struct drbd_connection*,struct drbd_socket*,int,int,int *,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct drbd_connection *VAR_2, enum drbd_state_rv VAR_3)
{
 struct drbd_socket *VAR_4;
 struct p_req_state_reply *VAR_5;
 enum drbd_packet VAR_6 = VAR_2->agreed_pro_version < 100 ? VAR_1 : VAR_0;

 VAR_4 = &VAR_2->meta;
 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (VAR_5) {
  VAR_5->retcode = FUNC_2(VAR_3);
  FUNC_1(VAR_2, VAR_4, VAR_6, sizeof(*VAR_5), ((void*)0), 0);
 }
}

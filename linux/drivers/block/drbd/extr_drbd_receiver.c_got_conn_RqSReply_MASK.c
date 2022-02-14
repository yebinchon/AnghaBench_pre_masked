
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_info {struct p_req_state_reply* data; } ;
struct p_req_state_reply {int retcode; } ;
struct drbd_connection {int ping_wait; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drbd_connection*,char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drbd_connection *VAR_3, struct packet_info *VAR_4)
{
 struct p_req_state_reply *VAR_5 = VAR_4->data;
 int VAR_6 = FUNC_0(VAR_5->retcode);

 if (VAR_6 >= VAR_2) {
  FUNC_3(VAR_1, &VAR_3->flags);
 } else {
  FUNC_3(VAR_0, &VAR_3->flags);
  FUNC_1(VAR_3, "Requested state change failed by peer: %s (%d)\n",
    FUNC_2(VAR_6), VAR_6);
 }
 FUNC_4(&VAR_3->ping_wait);

 return 0;
}

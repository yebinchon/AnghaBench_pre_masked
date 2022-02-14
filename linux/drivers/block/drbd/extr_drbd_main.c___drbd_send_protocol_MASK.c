
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_protocol {int integrity_alg; void* conn_flags; void* two_primaries; void* after_sb_2p; void* after_sb_1p; void* after_sb_0p; void* protocol; } ;
struct net_conf {int wire_protocol; int after_sb_0p; int after_sb_1p; int after_sb_2p; int two_primaries; int integrity_alg; scalar_t__ tentative; scalar_t__ discard_my_data; } ;
struct drbd_socket {int dummy; } ;
struct drbd_connection {int agreed_pro_version; int net_conf; struct drbd_socket data; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct p_protocol* FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (struct drbd_connection*,struct drbd_socket*,int,int,int *,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct drbd_connection*,char*) ;
 struct net_conf* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct drbd_connection *VAR_4, enum drbd_packet VAR_5)
{
 struct drbd_socket *VAR_6;
 struct p_protocol *VAR_7;
 struct net_conf *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = &VAR_4->data;
 VAR_7 = FUNC_0(VAR_4, VAR_6);
 if (!VAR_7)
  return -VAR_2;

 FUNC_5();
 VAR_8 = FUNC_4(VAR_4->net_conf);

 if (VAR_8->tentative && VAR_4->agreed_pro_version < 92) {
  FUNC_6();
  FUNC_3(VAR_4, "--dry-run is not supported by peer");
  return -VAR_3;
 }

 VAR_9 = sizeof(*VAR_7);
 if (VAR_4->agreed_pro_version >= 87)
  VAR_9 += FUNC_8(VAR_8->integrity_alg) + 1;

 VAR_7->protocol = FUNC_2(VAR_8->wire_protocol);
 VAR_7->after_sb_0p = FUNC_2(VAR_8->after_sb_0p);
 VAR_7->after_sb_1p = FUNC_2(VAR_8->after_sb_1p);
 VAR_7->after_sb_2p = FUNC_2(VAR_8->after_sb_2p);
 VAR_7->two_primaries = FUNC_2(VAR_8->two_primaries);
 VAR_10 = 0;
 if (VAR_8->discard_my_data)
  VAR_10 |= VAR_0;
 if (VAR_8->tentative)
  VAR_10 |= VAR_1;
 VAR_7->conn_flags = FUNC_2(VAR_10);

 if (VAR_4->agreed_pro_version >= 87)
  FUNC_7(VAR_7->integrity_alg, VAR_8->integrity_alg);
 FUNC_6();

 return FUNC_1(VAR_4, VAR_6, VAR_5, VAR_9, ((void*)0), 0);
}

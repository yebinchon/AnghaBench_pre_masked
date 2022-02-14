
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_connection_features {void* feature_flags; void* protocol_max; void* protocol_min; } ;
struct drbd_socket {int dummy; } ;
struct drbd_connection {struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct p_connection_features* FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (struct drbd_connection*,struct drbd_socket*,int ,int,int *,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct p_connection_features*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct drbd_connection *VAR_5)
{
 struct drbd_socket *VAR_6;
 struct p_connection_features *VAR_7;

 VAR_6 = &VAR_5->data;
 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (!VAR_7)
  return -VAR_0;
 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->protocol_min = FUNC_2(VAR_3);
 VAR_7->protocol_max = FUNC_2(VAR_2);
 VAR_7->feature_flags = FUNC_2(VAR_1);
 return FUNC_1(VAR_5, VAR_6, VAR_4, sizeof(*VAR_7), ((void*)0), 0);
}

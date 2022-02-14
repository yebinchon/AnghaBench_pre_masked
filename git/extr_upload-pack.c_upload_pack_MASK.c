
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_pack_options {scalar_t__ advertise_refs; int daemon_mode; int timeout; int stateless_rpc; } ;
struct string_list {int dummy; } ;
struct packet_reader {int dummy; } ;
struct object_array {scalar_t__ nr; } ;


 struct object_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct string_list VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct object_array*,struct object_array*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,struct string_list*) ;
 int FUNC_3 (struct packet_reader*,struct object_array*,struct object_array*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,struct string_list*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct packet_reader*,int ,int *,int ,int) ;
 int FUNC_8 (struct packet_reader*,struct object_array*) ;
 int FUNC_9 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct string_list*,int) ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_11(struct upload_pack_options *VAR_11)
{
 struct string_list VAR_12 = VAR_3;
 struct object_array VAR_13 = VAR_0;
 struct packet_reader VAR_14;

 VAR_8 = VAR_11->stateless_rpc;
 VAR_9 = VAR_11->timeout;
 VAR_5 = VAR_11->daemon_mode;

 FUNC_4(VAR_10, ((void*)0));

 FUNC_5(VAR_6, &VAR_12);

 if (VAR_11->advertise_refs || !VAR_8) {
  FUNC_9();
  FUNC_5(VAR_7, &VAR_12);
  FUNC_2(VAR_7, &VAR_12);
  FUNC_0(1);
  FUNC_6(1);
 } else {
  FUNC_5(VAR_4, ((void*)0));
  FUNC_2(VAR_4, ((void*)0));
 }
 FUNC_10(&VAR_12, 1);
 if (VAR_11->advertise_refs)
  return;

 FUNC_7(&VAR_14, 0, ((void*)0), 0,
      VAR_1 |
      VAR_2);

 FUNC_8(&VAR_14, &VAR_13);
 if (VAR_13.nr) {
  struct object_array VAR_15 = VAR_0;
  FUNC_3(&VAR_14, &VAR_15, &VAR_13);
  FUNC_1(&VAR_15, &VAR_13);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int server_options; struct git_transport_data* data; } ;
struct ref {int dummy; } ;
struct packet_reader {scalar_t__ line_peeked; } ;
struct git_transport_data {int version; int got_remote_heads; int shallow; int extra_have; int * fd; } ;
struct argv_array {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct transport*,int) ;
 int FUNC_2 (struct transport*) ;
 int FUNC_3 (struct packet_reader*) ;
 int FUNC_4 (struct packet_reader*,struct ref**,int ,int *,int *) ;
 int FUNC_5 (int ,struct packet_reader*,struct ref**,int,struct argv_array const*,int ) ;
 int FUNC_6 (struct packet_reader*,int ,int *,int ,int) ;





__attribute__((used)) static struct ref *FUNC_7(struct transport *VAR_4, int VAR_5,
        const struct argv_array *VAR_6,
        int VAR_7)
{
 struct git_transport_data *VAR_8 = VAR_4->data;
 struct ref *VAR_9 = ((void*)0);
 struct packet_reader VAR_10;

 FUNC_1(VAR_4, VAR_5);

 FUNC_6(&VAR_10, VAR_8->fd[0], ((void*)0), 0,
      VAR_0 |
      VAR_2 |
      VAR_1);

 VAR_8->version = FUNC_3(&VAR_10);
 switch (VAR_8->version) {
 case 128:
  if (VAR_7)
   FUNC_5(VAR_8->fd[1], &VAR_10, &VAR_9, VAR_5,
     VAR_6,
     VAR_4->server_options);
  break;
 case 129:
 case 130:
  FUNC_2(VAR_4);
  FUNC_4(&VAR_10, &VAR_9,
     VAR_5 ? VAR_3 : 0,
     &VAR_8->extra_have,
     &VAR_8->shallow);
  break;
 case 131:
  FUNC_0("unknown protocol version");
 }
 VAR_8->got_remote_heads = 1;

 if (VAR_10.line_peeked)
  FUNC_0("buffer must be empty at the end of handshake()");

 return VAR_9;
}

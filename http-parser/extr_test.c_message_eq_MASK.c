
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {scalar_t__ type; int status_cb_called; int message_begin_cb_called; int headers_complete_cb_called; int message_complete_cb_called; char* request_url; scalar_t__ method; int body_size; int num_chunks_complete; int num_chunks; int num_headers; int ** headers; int port; scalar_t__ userinfo; scalar_t__ host; } ;
struct http_parser_url {int field_set; int port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct message const*,struct message*,int ) ;
 int FUNC_1 (struct message const*,struct message*,int ) ;
 int FUNC_2 (struct http_parser_url*,struct message const*,struct message*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct message*,char*,int ,int) ;
 int FUNC_6 (struct message const*,char*,int ,int ) ;
 int * VAR_11 ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_8 (char*,int ,int ,struct http_parser_url*) ;
 int VAR_16 ;
 struct message* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_9 (char*) ;
 int VAR_29 ;
 int VAR_30 ;

int
FUNC_10 (int VAR_31, int VAR_32, const struct message *VAR_33)
{
  int VAR_34;
  struct message *VAR_35 = &VAR_17[VAR_31];

  FUNC_0(VAR_33, VAR_35, VAR_14);
  FUNC_0(VAR_33, VAR_35, VAR_15);

  if (VAR_33->type == VAR_1) {
    FUNC_0(VAR_33, VAR_35, VAR_18);
  } else {
    FUNC_0(VAR_33, VAR_35, VAR_27);
    FUNC_1(VAR_33, VAR_35, VAR_25);
    FUNC_4(VAR_35->status_cb_called);
  }

  if (!VAR_32) {
    FUNC_0(VAR_33, VAR_35, VAR_26);
    FUNC_0(VAR_33, VAR_35, VAR_16);
  }

  FUNC_4(VAR_35->message_begin_cb_called);
  FUNC_4(VAR_35->headers_complete_cb_called);
  FUNC_4(VAR_35->message_complete_cb_called);


  FUNC_1(VAR_33, VAR_35, VAR_24);




  if (*VAR_35->request_url && VAR_35->method != VAR_0) {
    struct http_parser_url VAR_36;

    if (FUNC_8(VAR_35->request_url, FUNC_9(VAR_35->request_url), 0, &VAR_36)) {
      FUNC_7(VAR_28, "\n\n*** failed to parse URL %s ***\n\n",
        VAR_35->request_url);
      FUNC_3();
    }

    if (VAR_33->host) {
      FUNC_2(&VAR_36, VAR_33, VAR_35, VAR_13, VAR_4);
    }

    if (VAR_33->userinfo) {
      FUNC_2(&VAR_36, VAR_33, VAR_35, VAR_30, VAR_8);
    }

    VAR_35->port = (VAR_36.field_set & (1 << VAR_6)) ?
      VAR_36.port : 0;

    FUNC_2(&VAR_36, VAR_33, VAR_35, VAR_22, VAR_7);
    FUNC_2(&VAR_36, VAR_33, VAR_35, VAR_12, VAR_3);
    FUNC_2(&VAR_36, VAR_33, VAR_35, VAR_23, VAR_5);
    FUNC_0(VAR_33, VAR_35, VAR_21);
  }

  if (VAR_32) {
    FUNC_5(VAR_35, "body_size", 0, VAR_35->body_size);
  } else if (VAR_33->body_size) {
    FUNC_0(VAR_33, VAR_35, VAR_10);
  } else {
    FUNC_1(VAR_33, VAR_35, VAR_9);
  }

  if (VAR_32) {
    FUNC_5(VAR_35, "num_chunks_complete", 0, VAR_35->num_chunks_complete);
  } else {
    FUNC_4(VAR_35->num_chunks == VAR_35->num_chunks_complete);
    FUNC_0(VAR_33, VAR_35, VAR_19);
    for (VAR_34 = 0; VAR_34 < VAR_35->num_chunks && VAR_34 < VAR_2; VAR_34++) {
      FUNC_0(VAR_33, VAR_35, VAR_11[VAR_34]);
    }
  }

  FUNC_0(VAR_33, VAR_35, VAR_20);

  int VAR_37;
  for (VAR_34 = 0; VAR_34 < VAR_35->num_headers; VAR_34++) {
    VAR_37 = FUNC_6(VAR_33, "header field", VAR_33->headers[VAR_34][0], VAR_35->headers[VAR_34][0]);
    if (!VAR_37) return 0;
    VAR_37 = FUNC_6(VAR_33, "header value", VAR_33->headers[VAR_34][1], VAR_35->headers[VAR_34][1]);
    if (!VAR_37) return 0;
  }

  if (!VAR_32) {
    FUNC_1(VAR_33, VAR_35, VAR_29);
  }

  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct rpc_state {char* service_name; int in; int out; int len; int * buf; int * protocol_header; int * hdr_accept; int * hdr_content_type; int * service_url; scalar_t__ pos; int alloc; } ;
struct discovery {int version; int len; int buf; } ;
struct child_process {int in; int out; int git_cmd; char const** argv; } ;
typedef int buf ;
struct TYPE_2__ {int buf; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,struct strbuf*) ;
 int VAR_2 ;
 int FUNC_5 (int,int *,int *,int *,int ,int ) ;
 int FUNC_6 (struct rpc_state*,int ) ;
 scalar_t__ FUNC_7 (struct child_process*) ;
 int FUNC_8 (struct strbuf*,char*,char const*,...) ;
 void* FUNC_9 (struct strbuf*,int *) ;
 int FUNC_10 (struct strbuf*,int,int ) ;
 int FUNC_11 (struct strbuf*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_12 (int,int ,int ) ;
 int * FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int,char*,int) ;

__attribute__((used)) static int FUNC_15(struct rpc_state *VAR_4, struct discovery *VAR_5,
         const char **VAR_6, const struct strbuf *VAR_7,
         struct strbuf *VAR_8)
{
 const char *VAR_9 = VAR_4->service_name;
 struct strbuf VAR_10 = VAR_1;
 struct child_process VAR_11 = VAR_0;
 int VAR_12 = 0;

 VAR_11.in = -1;
 VAR_11.out = -1;
 VAR_11.git_cmd = 1;
 VAR_11.argv = VAR_6;
 if (FUNC_7(&VAR_11))
  FUNC_1(1);
 FUNC_12(VAR_11.in, VAR_7->buf, VAR_7->len);
 if (VAR_5)
  FUNC_12(VAR_11.in, VAR_5->buf, VAR_5->len);

 VAR_4->alloc = VAR_2;
 VAR_4->buf = FUNC_13(VAR_4->alloc);
 VAR_4->in = VAR_11.in;
 VAR_4->out = VAR_11.out;

 FUNC_8(&VAR_10, "%s%s", VAR_3.buf, VAR_9);
 VAR_4->service_url = FUNC_9(&VAR_10, ((void*)0));

 FUNC_8(&VAR_10, "Content-Type: application/x-%s-request", VAR_9);
 VAR_4->hdr_content_type = FUNC_9(&VAR_10, ((void*)0));

 FUNC_8(&VAR_10, "Accept: application/x-%s-result", VAR_9);
 VAR_4->hdr_accept = FUNC_9(&VAR_10, ((void*)0));

 if (FUNC_4(VAR_5->version, &VAR_10))
  VAR_4->protocol_header = FUNC_9(&VAR_10, ((void*)0));
 else
  VAR_4->protocol_header = ((void*)0);

 while (!VAR_12) {
  int VAR_13 = FUNC_5(VAR_4->out, ((void*)0), ((void*)0), VAR_4->buf, VAR_4->alloc, 0);
  if (!VAR_13)
   break;
  VAR_4->pos = 0;
  VAR_4->len = VAR_13;
  VAR_12 |= FUNC_6(VAR_4, 0);
 }

 FUNC_0(VAR_11.in);
 VAR_11.in = -1;
 if (!VAR_12) {
  FUNC_10(VAR_8, VAR_11.out, 0);
 } else {
  char VAR_14[4096];
  for (;;)
   if (FUNC_14(VAR_11.out, VAR_14, sizeof(VAR_14)) <= 0)
    break;
 }

 FUNC_0(VAR_11.out);
 VAR_11.out = -1;

 VAR_12 |= FUNC_2(&VAR_11);
 FUNC_3(VAR_4->service_url);
 FUNC_3(VAR_4->hdr_content_type);
 FUNC_3(VAR_4->hdr_accept);
 FUNC_3(VAR_4->protocol_header);
 FUNC_3(VAR_4->buf);
 FUNC_11(&VAR_10);
 return VAR_12;
}

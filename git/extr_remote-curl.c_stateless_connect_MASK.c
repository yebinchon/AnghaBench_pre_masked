
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct rpc_state {char const* service_name; int in; int gzip_request; int write_line_lengths; int * buf; int * protocol_header; int * hdr_accept; int * hdr_content_type; int * service_url; scalar_t__ len; scalar_t__ flush_read_but_not_sent; scalar_t__ initial_buffer; scalar_t__ any_written; scalar_t__ out; scalar_t__ pos; int alloc; } ;
struct discovery {scalar_t__ version; int len; int buf; } ;
typedef enum packet_read_status { ____Placeholder_packet_read_status } packet_read_status ;
struct TYPE_2__ {int buf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 struct discovery* FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,struct strbuf*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct rpc_state*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct rpc_state*,int ,size_t*,int*) ;
 int VAR_6 ;
 int * FUNC_8 (struct strbuf*,int *) ;
 int FUNC_9 (struct strbuf*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_10 (int,int ,int ) ;
 int * FUNC_11 (int ) ;
 void* FUNC_12 (char*,char const*,...) ;

__attribute__((used)) static int FUNC_13(const char *VAR_8)
{
 struct discovery *VAR_9;
 struct rpc_state VAR_10;
 struct strbuf VAR_11 = VAR_3;
 VAR_9 = FUNC_1(VAR_8, 0);
 if (VAR_9->version != VAR_5) {
  FUNC_6("fallback\n");
  FUNC_2(VAR_6);
  return -1;
 } else {

  FUNC_6("\n");
  FUNC_2(VAR_6);
 }

 VAR_10.service_name = VAR_8;
 VAR_10.service_url = FUNC_12("%s%s", VAR_7.buf, VAR_10.service_name);
 VAR_10.hdr_content_type = FUNC_12("Content-Type: application/x-%s-request", VAR_10.service_name);
 VAR_10.hdr_accept = FUNC_12("Accept: application/x-%s-result", VAR_10.service_name);
 if (FUNC_4(VAR_9->version, &VAR_11)) {
  VAR_10.protocol_header = FUNC_8(&VAR_11, ((void*)0));
 } else {
  VAR_10.protocol_header = ((void*)0);
  FUNC_9(&VAR_11);
 }
 VAR_10.buf = FUNC_11(VAR_4);
 VAR_10.alloc = VAR_4;
 VAR_10.len = 0;
 VAR_10.pos = 0;
 VAR_10.in = 1;
 VAR_10.out = 0;
 VAR_10.any_written = 0;
 VAR_10.gzip_request = 1;
 VAR_10.initial_buffer = 0;
 VAR_10.write_line_lengths = 1;
 VAR_10.flush_read_but_not_sent = 0;





 FUNC_10(VAR_10.in, VAR_9->buf, VAR_9->len);


 while (1) {
  size_t VAR_12;
  enum packet_read_status VAR_13;

  if (!FUNC_7(&VAR_10, VAR_2, &VAR_12,
           &VAR_13))
   FUNC_0("The entire rpc->buf should be larger than LARGE_PACKET_MAX");
  if (VAR_13 == VAR_0)
   break;
  if (FUNC_5(&VAR_10, VAR_13 == VAR_1))

   break;

  VAR_10.len = 0;
 }

 FUNC_3(VAR_10.service_url);
 FUNC_3(VAR_10.hdr_content_type);
 FUNC_3(VAR_10.hdr_accept);
 FUNC_3(VAR_10.protocol_header);
 FUNC_3(VAR_10.buf);
 FUNC_9(&VAR_11);

 return 0;
}

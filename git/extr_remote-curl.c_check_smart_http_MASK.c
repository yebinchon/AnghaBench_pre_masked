
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct packet_reader {char const* line; scalar_t__ pktlen; int src_len; int src_buffer; } ;
struct discovery {int proto_git; int len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (struct packet_reader*,int,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct packet_reader*) ;
 scalar_t__ FUNC_4 (char const*,char const*,char const**) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static void FUNC_6(struct discovery *VAR_3, const char *VAR_4,
        struct strbuf *VAR_5)
{
 const char *VAR_6;
 struct packet_reader VAR_7;






 if (!FUNC_4(VAR_5->buf, "application/x-", &VAR_6) ||
     !FUNC_4(VAR_6, VAR_4, &VAR_6) ||
     FUNC_5(VAR_6, "-advertisement"))
  return;

 FUNC_2(&VAR_7, -1, VAR_3->buf, VAR_3->len,
      VAR_0 |
      VAR_1);
 if (FUNC_3(&VAR_7) != VAR_2)
  FUNC_1(FUNC_0("invalid server response; expected service, got flush packet"));

 if (FUNC_4(VAR_7.line, "# service=", &VAR_6) && !FUNC_5(VAR_6, VAR_4)) {





  for (;;) {
   FUNC_3(&VAR_7);
   if (VAR_7.pktlen <= 0) {
    break;
   }
  }





  VAR_3->buf = VAR_7.src_buffer;
  VAR_3->len = VAR_7.src_len;
  VAR_3->proto_git = 1;

 } else if (!FUNC_5(VAR_7.line, "version 2")) {




  VAR_3->proto_git = 1;

 } else {
  FUNC_1(FUNC_0("invalid server response; got '%s'"), VAR_7.line);
 }
}

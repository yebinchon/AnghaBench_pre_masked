
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {int pktlen; char const* line; } ;
struct object_id {int dummy; } ;
typedef enum ack_type { ____Placeholder_ack_type } ack_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 scalar_t__ FUNC_2 (struct packet_reader*) ;
 int FUNC_3 (char const*,struct object_id*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 int FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static enum ack_type FUNC_7(struct packet_reader *VAR_6,
        struct object_id *VAR_7)
{
 int VAR_8;
 const char *VAR_9;

 if (FUNC_2(VAR_6) != VAR_5)
  FUNC_1(FUNC_0("git fetch-pack: expected ACK/NAK, got a flush packet"));
 VAR_8 = VAR_6->pktlen;

 if (!FUNC_5(VAR_6->line, "NAK"))
  return VAR_4;
 if (FUNC_4(VAR_6->line, "ACK ", &VAR_9)) {
  const char *VAR_10;
  if (!FUNC_3(VAR_9, VAR_7, &VAR_10)) {
   VAR_8 -= VAR_10 - VAR_6->line;
   if (VAR_8 < 1)
    return VAR_0;
   if (FUNC_6(VAR_10, "continue"))
    return VAR_2;
   if (FUNC_6(VAR_10, "common"))
    return VAR_1;
   if (FUNC_6(VAR_10, "ready"))
    return VAR_3;
   return VAR_0;
  }
 }
 FUNC_1(FUNC_0("git fetch-pack: expected ACK/NAK, got '%s'"), VAR_6->line);
}

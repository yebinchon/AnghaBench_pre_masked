
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct imap_store {int name; } ;
struct imap_server_conf {scalar_t__ use_html; int folder; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct imap_store*) ;
 struct imap_store* FUNC_2 (struct imap_server_conf*,int ) ;
 int FUNC_3 (struct imap_store*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,struct strbuf*,int*) ;
 int VAR_2 ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(struct imap_server_conf *VAR_3,
          struct strbuf* VAR_4, int VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 struct imap_store *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10 = 0;

 VAR_7 = FUNC_2(VAR_3, VAR_3->folder);
 if (!VAR_7) {
  FUNC_0(VAR_2, "failed to open store\n");
  return 1;
 }
 VAR_7->name = VAR_3->folder;

 FUNC_0(VAR_2, "sending %d message%s\n", VAR_5, (VAR_5 != 1) ? "s" : "");
 while (1) {
  unsigned VAR_11 = VAR_10 * 100 / VAR_5;

  FUNC_0(VAR_2, "%4u%% (%d/%d) done\r", VAR_11, VAR_10, VAR_5);

  if (!FUNC_4(VAR_4, &VAR_6, &VAR_8))
   break;
  if (VAR_3->use_html)
   FUNC_5(&VAR_6);
  VAR_9 = FUNC_3(VAR_7, &VAR_6);
  if (VAR_9 != VAR_0)
   break;
  VAR_10++;
 }
 FUNC_0(VAR_2, "\n");

 FUNC_1(VAR_7);

 return 0;
}

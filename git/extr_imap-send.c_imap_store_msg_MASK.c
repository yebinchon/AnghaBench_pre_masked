
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;
struct imap_store {char* name; char* prefix; struct imap* imap; } ;
struct imap_cmd_cb {int data; int dlen; } ;
struct imap {int rcaps; int caps; } ;
typedef int cb ;


 int VAR_0 ;
 int FUNC_0 (struct imap_store*,struct imap_cmd_cb*,char*,char const*,char const*) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (struct imap_cmd_cb*,int ,int) ;
 int FUNC_3 (struct strbuf*,int *) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(struct imap_store *VAR_1, struct strbuf *VAR_2)
{
 struct imap *VAR_3 = VAR_1->imap;
 struct imap_cmd_cb VAR_4;
 const char *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_1(VAR_2);
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.dlen = VAR_2->len;
 VAR_4.data = FUNC_3(VAR_2, ((void*)0));

 VAR_6 = VAR_1->name;
 VAR_5 = !FUNC_4(VAR_6, "INBOX") ? "" : VAR_1->prefix;
 VAR_7 = FUNC_0(VAR_1, &VAR_4, "APPEND \"%s%s\" ", VAR_5, VAR_6);
 VAR_3->caps = VAR_3->rcaps;
 if (VAR_7 != VAR_0)
  return VAR_7;

 return VAR_0;
}

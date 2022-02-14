
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct remote_lock {int timeout; int token; } ;
struct curl_slist {int dummy; } ;
typedef enum dav_header_flag { ____Placeholder_dav_header_flag } dav_header_flag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 struct curl_slist* FUNC_0 (struct curl_slist*,int ) ;
 struct curl_slist* FUNC_1 () ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static struct curl_slist *FUNC_5(struct remote_lock *VAR_4, enum dav_header_flag VAR_5)
{
 struct strbuf VAR_6 = VAR_3;
 struct curl_slist *VAR_7 = FUNC_1();

 if (VAR_5 & VAR_0) {
  FUNC_2(&VAR_6, "If: (<%s>)", VAR_4->token);
  VAR_7 = FUNC_0(VAR_7, VAR_6.buf);
  FUNC_4(&VAR_6);
 }
 if (VAR_5 & VAR_1) {
  FUNC_2(&VAR_6, "Lock-Token: <%s>", VAR_4->token);
  VAR_7 = FUNC_0(VAR_7, VAR_6.buf);
  FUNC_4(&VAR_6);
 }
 if (VAR_5 & VAR_2) {
  FUNC_2(&VAR_6, "Timeout: Second-%ld", VAR_4->timeout);
  VAR_7 = FUNC_0(VAR_7, VAR_6.buf);
  FUNC_4(&VAR_6);
 }
 FUNC_3(&VAR_6);

 return VAR_7;
}

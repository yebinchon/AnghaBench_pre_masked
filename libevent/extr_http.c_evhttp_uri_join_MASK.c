
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_uri {char* path; scalar_t__ fragment; scalar_t__ query; int port; int userinfo; scalar_t__ host; scalar_t__ scheme; } ;
struct evbuffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct evbuffer*,char*,int) ;
 int FUNC_2 (struct evbuffer*,char*,int ) ;
 int FUNC_3 (struct evbuffer*) ;
 size_t FUNC_4 (struct evbuffer*) ;
 struct evbuffer* FUNC_5 () ;
 int FUNC_6 (struct evbuffer*,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

char *
FUNC_7(struct evhttp_uri *VAR_5, char *VAR_6, size_t VAR_7)
{
 struct evbuffer *VAR_8 = 0;
 size_t VAR_9 = 0;
 char *VAR_10 = ((void*)0);



 if (!VAR_5 || !VAR_6 || !VAR_7)
  return ((void*)0);

 VAR_8 = FUNC_5();
 if (!VAR_8)
  return ((void*)0);

 if (VAR_5->scheme) {
  FUNC_1(VAR_8, VAR_5->scheme, strlen(VAR_5->scheme));
  FUNC_1(VAR_8, ":", 1);
 }
 if (VAR_5->host) {
  FUNC_1(VAR_8, "//", 2);
  if (VAR_5->userinfo)
   FUNC_2(VAR_8,"%s@", VAR_5->userinfo);
  FUNC_1(VAR_8, VAR_5->host, FUNC_0(VAR_5->host));
  if (VAR_5->port >= 0)
   FUNC_2(VAR_8,":%d", VAR_5->port);

  if (VAR_5->path && VAR_5->path[0] != '/' && VAR_5->path[0] != '\0')
   goto err;
 }

 if (VAR_5->path)
  FUNC_1(VAR_8, VAR_5->path, FUNC_0(VAR_5->path));

 if (VAR_5->query) {
  FUNC_1(VAR_8, "?", 1);
  FUNC_1(VAR_8, VAR_5->query, FUNC_0(VAR_5->query));
 }

 if (VAR_5->fragment) {
  FUNC_1(VAR_8, "#", 1);
  FUNC_1(VAR_8, VAR_5->fragment, FUNC_0(VAR_5->fragment));
 }

 FUNC_1(VAR_8, "\0", 1);

 VAR_9 = FUNC_4(VAR_8);

 if (VAR_9 > VAR_7) {

  FUNC_3(VAR_8);
  return ((void*)0);
 }
        FUNC_6(VAR_8, VAR_6, VAR_9);

 VAR_10 = VAR_6;
err:
 FUNC_3(VAR_8);

 return VAR_10;

}

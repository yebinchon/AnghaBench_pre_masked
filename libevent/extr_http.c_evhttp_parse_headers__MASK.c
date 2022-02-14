
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evkeyvalq {int dummy; } ;
struct evhttp_request {scalar_t__ headers_size; TYPE_1__* evcon; struct evkeyvalq* input_headers; } ;
struct evbuffer {int dummy; } ;
typedef enum message_read_status { ____Placeholder_message_read_status } message_read_status ;
struct TYPE_2__ {scalar_t__ max_headers_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct evbuffer*) ;
 char* FUNC_1 (struct evbuffer*,size_t*,int ) ;
 int FUNC_2 (struct evkeyvalq*,char*,char*) ;
 int FUNC_3 (struct evkeyvalq*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (char*,char*) ;

enum message_read_status
FUNC_8(struct evhttp_request *VAR_5, struct evbuffer* VAR_6)
{
 enum message_read_status VAR_7 = VAR_1;
 char *VAR_8;
 enum message_read_status VAR_9 = VAR_4;

 struct evkeyvalq* VAR_10 = VAR_5->input_headers;
 size_t VAR_11;
 while ((VAR_8 = FUNC_1(VAR_6, &VAR_11, VAR_3))
        != ((void*)0)) {
  char *VAR_12, *VAR_13;

  VAR_5->headers_size += VAR_11;

  if (VAR_5->evcon != ((void*)0) &&
      VAR_5->headers_size > VAR_5->evcon->max_headers_size) {
   VAR_7 = VAR_2;
   goto error;
  }

  if (*VAR_8 == '\0') {
   VAR_9 = VAR_0;
   FUNC_5(VAR_8);
   break;
  }


  if (*VAR_8 == ' ' || *VAR_8 == '\t') {
   if (FUNC_3(VAR_10, VAR_8) == -1)
    goto error;
   FUNC_5(VAR_8);
   continue;
  }


  VAR_13 = VAR_8;
  VAR_12 = FUNC_6(&VAR_13, ":");
  if (VAR_13 == ((void*)0))
   goto error;

  VAR_13 += FUNC_7(VAR_13, " ");
  FUNC_4(VAR_13);

  if (FUNC_2(VAR_10, VAR_12, VAR_13) == -1)
   goto error;

  FUNC_5(VAR_8);
 }

 if (VAR_9 == VAR_4) {
  if (VAR_5->evcon != ((void*)0) &&
  VAR_5->headers_size + FUNC_0(VAR_6) > VAR_5->evcon->max_headers_size)
   return (VAR_2);
 }

 return (VAR_9);

 error:
 FUNC_5(VAR_8);
 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct stat {scalar_t__ st_size; } ;
struct TYPE_4__ {int buf; } ;
struct TYPE_6__ {int hash; } ;
struct http_object_request {int localfile; int http_code; scalar_t__ curl_result; scalar_t__ zret; int rename; TYPE_1__ tmpfile; int oid; TYPE_3__ real_oid; int c; int stream; } ;
struct TYPE_5__ {int (* final_fn ) (int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct strbuf*,int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (struct http_object_request*) ;
 scalar_t__ FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (int ,int *) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

int FUNC_11(struct http_object_request *VAR_5)
{
 struct stat VAR_6;
 struct strbuf VAR_7 = VAR_1;

 FUNC_0(VAR_5->localfile);
 VAR_5->localfile = -1;

 FUNC_5(VAR_5);

 if (VAR_5->http_code == 416) {
  FUNC_10("requested range invalid; we may already have all the data.");
 } else if (VAR_5->curl_result != VAR_0) {
  if (FUNC_6(VAR_5->tmpfile.buf, &VAR_6) == 0)
   if (VAR_6.st_size == 0)
    FUNC_9(VAR_5->tmpfile.buf);
  return -1;
 }

 FUNC_2(&VAR_5->stream);
 VAR_3->final_fn(VAR_5->real_oid.hash, &VAR_5->c);
 if (VAR_5->zret != VAR_2) {
  FUNC_9(VAR_5->tmpfile.buf);
  return -1;
 }
 if (!FUNC_4(&VAR_5->oid, &VAR_5->real_oid)) {
  FUNC_9(VAR_5->tmpfile.buf);
  return -1;
 }
 FUNC_3(VAR_4, &VAR_7, &VAR_5->oid);
 VAR_5->rename = FUNC_1(VAR_5->tmpfile.buf, VAR_7.buf);
 FUNC_7(&VAR_7);

 return VAR_5->rename;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ len; scalar_t__ buf; } ;
struct ref {int symref; int old_oid; int name; } ;
struct http_get_options {int no_cache; int member_0; } ;
struct TYPE_2__ {scalar_t__ hexsz; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (char*,struct strbuf*,struct http_get_options*) ;
 char* FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(const char *VAR_3, struct ref *VAR_4)
{
 struct http_get_options VAR_5 = {0};
 char *VAR_6;
 struct strbuf VAR_7 = VAR_1;
 int VAR_8 = -1;

 VAR_5.no_cache = 1;

 VAR_6 = FUNC_3(VAR_3, VAR_4->name);
 if (FUNC_2(VAR_6, &VAR_7, &VAR_5) == VAR_0) {
  FUNC_6(&VAR_7);
  if (VAR_7.len == VAR_2->hexsz)
   VAR_8 = FUNC_1(VAR_7.buf, &VAR_4->old_oid);
  else if (FUNC_4(VAR_7.buf, "ref: ")) {
   VAR_4->symref = FUNC_7(VAR_7.buf + 5);
   VAR_8 = 0;
  }
 }

 FUNC_5(&VAR_7);
 FUNC_0(VAR_6);
 return VAR_8;
}

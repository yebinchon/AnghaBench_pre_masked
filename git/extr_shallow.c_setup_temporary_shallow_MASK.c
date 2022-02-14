
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int fd; } ;
struct strbuf {int len; int buf; } ;
struct oid_array {int dummy; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct tempfile*) ;
 int FUNC_1 (char*,char const*) ;
 char const* FUNC_2 (struct tempfile*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct strbuf*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct strbuf*,int ,struct oid_array const*) ;
 struct tempfile* FUNC_7 (int ) ;

const char *FUNC_8(const struct oid_array *VAR_1)
{
 struct tempfile *VAR_2;
 struct strbuf VAR_3 = VAR_0;

 if (FUNC_6(&VAR_3, 0, VAR_1)) {
  VAR_2 = FUNC_7(FUNC_3("shallow_XXXXXX"));

  if (FUNC_5(VAR_2->fd, VAR_3.buf, VAR_3.len) < 0 ||
      FUNC_0(VAR_2) < 0)
   FUNC_1("failed to write to %s",
      FUNC_2(VAR_2));
  FUNC_4(&VAR_3);
  return FUNC_2(VAR_2);
 }




 return "";
}

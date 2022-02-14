
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct object_id {int dummy; } ;
struct object_directory {int path; } ;


 int FUNC_0 (struct strbuf*,struct object_id const*) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static const char *FUNC_4(struct object_directory *VAR_0,
      struct strbuf *VAR_1,
      const struct object_id *VAR_2)
{
 FUNC_3(VAR_1);
 FUNC_2(VAR_1, VAR_0->path);
 FUNC_1(VAR_1, '/');
 FUNC_0(VAR_1, VAR_2);
 return VAR_1->buf;
}

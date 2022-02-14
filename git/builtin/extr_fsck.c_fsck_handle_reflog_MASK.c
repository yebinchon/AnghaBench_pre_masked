
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (void*,struct strbuf*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const struct object_id *VAR_3,
         int VAR_4, void *VAR_5)
{
 struct strbuf VAR_6 = VAR_0;

 FUNC_2(VAR_5, &VAR_6, VAR_2);
 FUNC_0(VAR_6.buf, VAR_1, VAR_6.buf);
 FUNC_1(&VAR_6);
 return 0;
}

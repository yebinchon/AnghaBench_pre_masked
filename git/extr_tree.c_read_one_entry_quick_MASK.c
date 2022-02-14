
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state*,struct object_id const*,int ,int ,char const*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_1, struct strbuf *VAR_2,
    const char *VAR_3, unsigned VAR_4, int VAR_5,
    void *VAR_6)
{
 struct index_state *VAR_7 = VAR_6;
 return FUNC_0(VAR_7, VAR_1, VAR_2->buf, VAR_2->len, VAR_3,
      VAR_4, VAR_5,
      VAR_0);
}

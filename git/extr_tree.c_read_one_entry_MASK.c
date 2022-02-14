
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state*,struct object_id const*,int ,int ,char const*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_2, struct strbuf *VAR_3,
     const char *VAR_4, unsigned VAR_5, int VAR_6,
     void *VAR_7)
{
 struct index_state *VAR_8 = VAR_7;
 return FUNC_0(VAR_8, VAR_2, VAR_3->buf, VAR_3->len, VAR_4,
      VAR_5, VAR_6,
      VAR_0|VAR_1);
}

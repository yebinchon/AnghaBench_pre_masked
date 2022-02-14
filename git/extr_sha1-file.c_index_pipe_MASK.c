
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct index_state*,struct object_id*,int ,int ,int,char const*,unsigned int) ;
 scalar_t__ FUNC_1 (struct strbuf*,int,int) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct index_state *VAR_1, struct object_id *VAR_2,
        int VAR_3, enum object_type VAR_4,
        const char *VAR_5, unsigned VAR_6)
{
 struct strbuf VAR_7 = VAR_0;
 int VAR_8;

 if (FUNC_1(&VAR_7, VAR_3, 4096) >= 0)
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_7.buf, VAR_7.len, VAR_4, VAR_5, VAR_6);
 else
  VAR_8 = -1;
 FUNC_2(&VAR_7);
 return VAR_8;
}

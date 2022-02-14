
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ,char const*,struct object_id*,unsigned int) ;
 scalar_t__ FUNC_1 (struct strbuf*,int,int) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct object_id *VAR_1, int VAR_2, const char *VAR_3, unsigned VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 int VAR_6;

 if (FUNC_1(&VAR_5, VAR_2, 4096) < 0)
  VAR_6 = -1;
 else
  VAR_6 = FUNC_0(VAR_5.buf, VAR_5.len, VAR_3, VAR_1,
       VAR_4);
 FUNC_2(&VAR_5);
 return VAR_6;
}

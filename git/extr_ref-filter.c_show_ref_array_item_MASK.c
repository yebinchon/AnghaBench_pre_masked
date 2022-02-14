
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct ref_format {int dummy; } ;
struct ref_array_item {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct ref_array_item*,struct ref_format const*,struct strbuf*,struct strbuf*) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (char) ;
 int VAR_1 ;
 int FUNC_4 (struct strbuf*) ;

void FUNC_5(struct ref_array_item *VAR_2,
    const struct ref_format *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;

 if (FUNC_1(VAR_2, VAR_3, &VAR_4, &VAR_5))
  FUNC_0("%s", VAR_5.buf);
 FUNC_2(VAR_4.buf, 1, VAR_4.len, VAR_1);
 FUNC_4(&VAR_5);
 FUNC_4(&VAR_4);
 FUNC_3('\n');
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct signature_check {char result; } ;
struct commit {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct signature_check*) ;
 scalar_t__ FUNC_1 (struct commit const*,struct strbuf*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;

int FUNC_3(const struct commit *VAR_1, struct signature_check *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_0;
 int VAR_5 = 1;

 VAR_2->result = 'N';

 if (FUNC_1(VAR_1, &VAR_3, &VAR_4) <= 0)
  goto out;
 VAR_5 = FUNC_0(VAR_3.buf, VAR_3.len, VAR_4.buf,
  VAR_4.len, VAR_2);

 out:
 FUNC_2(&VAR_3);
 FUNC_2(&VAR_4);

 return VAR_5;
}

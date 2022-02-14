
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct strbuf*,char*,size_t) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_0, struct strbuf *VAR_1, int *VAR_2)
{
 char *VAR_3, *VAR_4;
 size_t VAR_5;

 if (*VAR_2 >= VAR_0->len)
  return 0;

 VAR_4 = &VAR_0->buf[*VAR_2];
 VAR_5 = VAR_0->len - *VAR_2;

 if (VAR_5 < 5 || !FUNC_0(VAR_4, "From "))
  return 0;

 VAR_3 = FUNC_2(VAR_4, '\n');
 if (VAR_3) {
  VAR_3++;
  VAR_5 -= VAR_3 - VAR_4;
  *VAR_2 += VAR_3 - VAR_4;
  VAR_4 = VAR_3;
 }

 VAR_3 = FUNC_3(VAR_4, "\nFrom ");
 if (VAR_3)
  VAR_5 = &VAR_3[1] - VAR_4;

 FUNC_1(VAR_1, VAR_4, VAR_5);
 *VAR_2 += VAR_5;
 return 1;
}

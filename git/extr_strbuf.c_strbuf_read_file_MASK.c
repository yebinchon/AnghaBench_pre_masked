
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct strbuf*,int,size_t) ;

ssize_t FUNC_3(struct strbuf *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5 < 0)
  return -1;
 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_4);
 VAR_7 = VAR_1;
 FUNC_0(VAR_5);
 if (VAR_6 < 0) {
  VAR_1 = VAR_7;
  return -1;
 }

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_1(struct strbuf *VAR_0, size_t VAR_1, uintmax_t VAR_2)
{
 while (VAR_1-- > 0) {
  FUNC_0(VAR_0, VAR_2 & 0xff);
  VAR_2 >>= 8;
 }
 return -!!VAR_2;
}

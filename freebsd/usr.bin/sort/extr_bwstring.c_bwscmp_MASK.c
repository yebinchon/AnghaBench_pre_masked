
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwstring {size_t len; } ;


 int FUNC_0 (struct bwstring const*,struct bwstring const*,size_t,size_t) ;

int
FUNC_1(const struct bwstring *VAR_0, const struct bwstring *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = VAR_0->len;
 VAR_4 = VAR_1->len;

 VAR_3 -= VAR_2;
 VAR_4 -= VAR_2;

 VAR_5 = VAR_3;

 if (VAR_4 < VAR_5)
  VAR_5 = VAR_4;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);

 if (VAR_6 == 0) {
  if( VAR_3 < VAR_4)
   VAR_6 = -1;
  else if (VAR_4 < VAR_3)
   VAR_6 = +1;
 }

 return (VAR_6);
}

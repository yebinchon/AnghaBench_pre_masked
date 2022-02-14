
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int magic; int prefix; } ;


 int VAR_0 ;
 int FUNC_0 (struct pathspec_item const*,char const*,char const*,int) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const struct pathspec_item *VAR_1,
     const char *VAR_2, const char *VAR_3, int VAR_4)
{
 if (VAR_1->magic & VAR_0) {
  int VAR_5, VAR_6 = VAR_4 > VAR_1->prefix ? VAR_1->prefix : VAR_4;
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_6);
  if (VAR_5)
   return VAR_5;
  VAR_2 += VAR_6;
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
 }
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}

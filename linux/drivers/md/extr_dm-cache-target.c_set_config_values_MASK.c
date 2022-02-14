
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct cache*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct cache *VAR_1, int VAR_2, const char **VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2 & 1) {
  FUNC_0("Odd number of policy arguments given but they should be <key> <value> pairs.");
  return -VAR_0;
 }

 while (VAR_2) {
  VAR_4 = FUNC_1(VAR_1, VAR_3[0], VAR_3[1]);
  if (VAR_4)
   break;

  VAR_2 -= 2;
  VAR_3 += 2;
 }

 return VAR_4;
}

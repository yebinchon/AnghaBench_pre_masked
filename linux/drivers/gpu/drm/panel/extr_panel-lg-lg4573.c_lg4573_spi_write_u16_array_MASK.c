
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lg4573 {int dummy; } ;


 int FUNC_0 (struct lg4573*,int const) ;

__attribute__((used)) static int FUNC_1(struct lg4573 *VAR_0, const u16 *VAR_1,
          unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}

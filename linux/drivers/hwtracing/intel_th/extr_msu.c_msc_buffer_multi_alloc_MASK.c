
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {int dummy; } ;


 int FUNC_0 (struct msc*) ;
 int FUNC_1 (struct msc*) ;
 int FUNC_2 (struct msc*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct msc *VAR_0, unsigned long *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_2(VAR_0, VAR_1[VAR_4]);
  if (VAR_3) {
   FUNC_0(VAR_0);
   return VAR_3;
  }
 }

 FUNC_1(VAR_0);

 return 0;
}

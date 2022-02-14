
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int ,int,int*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;

void FUNC_3(const char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_4 = VAR_5 =
  FUNC_1(VAR_1, VAR_2, VAR_0.buf, VAR_0.len,
       &VAR_6);

 while (VAR_5 < VAR_2) {
  if (VAR_1[VAR_5] == '/')
   VAR_4 = VAR_5;
  VAR_5++;
 }






 if (VAR_3 < VAR_4 && VAR_3 < VAR_0.len)
  FUNC_0(VAR_3);




 if (VAR_3 < VAR_4)
  FUNC_2(&VAR_0, &VAR_1[VAR_3], VAR_4 - VAR_3);
}

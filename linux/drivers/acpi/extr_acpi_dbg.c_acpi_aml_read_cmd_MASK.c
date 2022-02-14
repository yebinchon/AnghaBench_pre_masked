
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int wait; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(char *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;





 FUNC_0(!VAR_1);
 while (VAR_4 > 0) {
again:



  VAR_5 = FUNC_2();
  if (VAR_5 == -VAR_0) {
   VAR_5 = FUNC_3(VAR_2.wait,
    FUNC_1());




   if (VAR_5 == 0)
    goto again;
  }
  if (VAR_5 < 0)
   break;
  *(VAR_3 + VAR_6) = (char)VAR_5;
  VAR_6++;
  VAR_4--;
  if (VAR_5 == '\n') {




   *(VAR_3 + VAR_6 - 1) = '\0';
   break;
  }
 }
 return VAR_6 > 0 ? VAR_6 : VAR_5;
}

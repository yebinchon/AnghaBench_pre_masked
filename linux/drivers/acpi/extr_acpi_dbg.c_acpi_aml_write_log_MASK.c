
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(const char *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0, VAR_7 = 0;

 if (!VAR_2)
  return -VAR_1;
 if (VAR_4)
  VAR_6 = FUNC_2(VAR_4);
 while (VAR_6 > 0) {
again:
  VAR_5 = FUNC_1(VAR_4 + VAR_7, VAR_6);
  if (VAR_5 == -VAR_0) {
   VAR_5 = FUNC_3(VAR_3.wait,
    FUNC_0());




   if (VAR_5 == 0)
    goto again;
   break;
  }
  if (VAR_5 < 0)
   break;
  VAR_7 += VAR_5;
  VAR_6 -= VAR_5;
 }
 return VAR_7 > 0 ? VAR_7 : VAR_5;
}

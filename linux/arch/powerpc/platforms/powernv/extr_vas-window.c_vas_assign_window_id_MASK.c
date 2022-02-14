
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ida*,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ida *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4, VAR_3 - 1, VAR_2);

 if (VAR_5 == -VAR_1) {
  FUNC_1("Too many (%d) open windows\n", VAR_3);
  return -VAR_0;
 }

 return VAR_5;
}

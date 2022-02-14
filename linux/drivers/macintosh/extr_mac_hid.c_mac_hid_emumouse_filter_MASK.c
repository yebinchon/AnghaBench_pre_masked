
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static bool FUNC_2(struct input_handle *VAR_6,
        unsigned int VAR_7, unsigned int VAR_8,
        int VAR_9)
{
 unsigned int VAR_10;

 if (VAR_7 != VAR_2)
  return 0;

 if (VAR_8 == VAR_4)
  VAR_10 = VAR_0;
 else if (VAR_8 == VAR_5)
  VAR_10 = VAR_1;
 else
  return 0;

 FUNC_0(VAR_3, VAR_10, VAR_9);
 FUNC_1(VAR_3);

 return 1;
}

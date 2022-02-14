
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_client {unsigned long** evmasks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned long*) ;

__attribute__((used)) static bool FUNC_2(struct evdev_client *VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
 unsigned long *VAR_5;
 size_t VAR_6;


 if (VAR_3 == VAR_1 || VAR_3 >= VAR_0)
  return 0;


 VAR_5 = VAR_2->evmasks[0];
 if (VAR_5 && !FUNC_1(VAR_3, VAR_5))
  return 1;


 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6 || VAR_4 >= VAR_6)
  return 0;

 VAR_5 = VAR_2->evmasks[VAR_3];
 return VAR_5 && !FUNC_1(VAR_4, VAR_5);
}

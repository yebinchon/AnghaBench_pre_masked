
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*,int) ;
 int * VAR_1 ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (char const*,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct mddev *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1);
 size_t VAR_6 = VAR_4;
 int VAR_7;

 if (VAR_6 < 2)
  return -VAR_0;

 if (VAR_3[VAR_6 - 1] == '\n')
  VAR_6--;

 while (VAR_5--)
  if (FUNC_4(VAR_1[VAR_5]) == VAR_6 &&
      !FUNC_5(VAR_3, VAR_1[VAR_5], VAR_6))
   break;
 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_2, VAR_5);
 FUNC_2(VAR_2);
 return VAR_7 ?: VAR_4;
}

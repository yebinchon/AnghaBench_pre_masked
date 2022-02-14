
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(int VAR_8)
{
 int VAR_9;
 int VAR_10;

 if (!VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_3, 2);

 VAR_10 = FUNC_1(&VAR_6,
    &VAR_5,
    &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_4);

 if ((VAR_8 == VAR_1)
  || ((VAR_9)
      && (VAR_8 == VAR_2)))
  VAR_10 = FUNC_0();

 return VAR_10;
}

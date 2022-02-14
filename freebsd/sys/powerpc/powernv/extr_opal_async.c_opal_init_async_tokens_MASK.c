
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_9 ;
 int * FUNC_2 (char*,int ,int,int,int,int) ;

int
FUNC_3(int VAR_10)
{

 if (VAR_7 != ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_2("OPAL Async", 0, VAR_10, 1, 1,
     VAR_4 | VAR_3);
 VAR_8 = FUNC_1(VAR_10 * sizeof(struct async_completion),
     VAR_2, VAR_4 | VAR_5);

 FUNC_0(VAR_6, VAR_9,
     ((void*)0), VAR_1);

 return (0);
}

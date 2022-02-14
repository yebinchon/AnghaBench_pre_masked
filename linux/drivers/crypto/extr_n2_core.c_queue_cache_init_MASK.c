
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (char*,int,int,int ,int *) ;
 int FUNC_1 (int *) ;
 int ** VAR_7 ;

__attribute__((used)) static int FUNC_2(void)
{
 if (!VAR_7[VAR_4 - 1])
  VAR_7[VAR_4 - 1] =
   FUNC_0("mau_queue",
       (VAR_6 *
        VAR_5),
       VAR_5, 0, ((void*)0));
 if (!VAR_7[VAR_4 - 1])
  return -VAR_2;

 if (!VAR_7[VAR_3 - 1])
  VAR_7[VAR_3 - 1] =
   FUNC_0("cwq_queue",
       (VAR_1 *
        VAR_0),
       VAR_0, 0, ((void*)0));
 if (!VAR_7[VAR_3 - 1]) {
  FUNC_1(VAR_7[VAR_4 - 1]);
  VAR_7[VAR_4 - 1] = ((void*)0);
  return -VAR_2;
 }
 return 0;
}

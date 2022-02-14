
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int,int ,int) ;
 int FUNC_1 (int,int ,int,int ,int *) ;
 int * VAR_5 ;
 int * VAR_6 ;

int FUNC_2(int VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_8 < 0 || VAR_8 > VAR_4)
  return -VAR_0;

 if (VAR_8 == VAR_4)
  return 1;


 VAR_9 = FUNC_1(VAR_7, VAR_5[VAR_8],
     VAR_3 | VAR_2 | VAR_1,
     VAR_6[VAR_8], ((void*)0));
 FUNC_0(VAR_9 < 0, "unable to request_irq %d for %s (rc %d)\n",
  VAR_7, VAR_6[VAR_8], VAR_9);

 return VAR_9;
}

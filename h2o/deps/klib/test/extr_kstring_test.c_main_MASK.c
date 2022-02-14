
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * s; scalar_t__ m; scalar_t__ l; } ;
typedef TYPE_1__ kstring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4()
{
 kstring_t VAR_8;

 VAR_8.l = VAR_8.m = 0;
 VAR_8.s = ((void*)0);

 FUNC_3(&VAR_8, 0);
 FUNC_3(&VAR_8, 1);
 FUNC_3(&VAR_8, 37);
 FUNC_3(&VAR_8, 12345);
 FUNC_3(&VAR_8, -12345);
 FUNC_3(&VAR_8, VAR_2);
 FUNC_3(&VAR_8, -VAR_2);
 FUNC_3(&VAR_8, VAR_3);

 FUNC_2(&VAR_8, 0);
 FUNC_2(&VAR_8, 1);
 FUNC_2(&VAR_8, 37);
 FUNC_2(&VAR_8, 12345);
 FUNC_2(&VAR_8, -12345);
 FUNC_2(&VAR_8, VAR_2);
 FUNC_2(&VAR_8, -VAR_2);
 FUNC_2(&VAR_8, VAR_3);
 FUNC_2(&VAR_8, VAR_4);
 FUNC_2(&VAR_8, -VAR_4);
 FUNC_2(&VAR_8, VAR_5);

 FUNC_1(VAR_8.s);

 if (VAR_6 > 0) {
  FUNC_0(VAR_7, "Total failures: %ld\n", VAR_6);
  return VAR_0;
 }

 return VAR_1;
}

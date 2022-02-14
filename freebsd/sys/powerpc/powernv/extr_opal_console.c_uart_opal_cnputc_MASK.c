
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_arg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_2(struct consdev *VAR_1, int VAR_2)
{
 unsigned char VAR_3 = VAR_2;
 int VAR_4;

 if (1) {

  for (VAR_4 = 0; VAR_4 < 20; VAR_4++) {
   FUNC_0(VAR_0, ((void*)0));
  }
 }
 FUNC_1(VAR_1->cn_arg, &VAR_3, 1);
}

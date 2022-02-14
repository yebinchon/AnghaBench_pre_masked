
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
typedef int bootTime ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int*,int,struct timeval*,size_t*,int *,int ) ;

int FUNC_3() {
   struct timeval VAR_2, VAR_3;
   int VAR_4[2] = { VAR_0, VAR_1 };
   size_t VAR_5 = sizeof(VAR_2);

   int VAR_6 = FUNC_2(VAR_4, 2, &VAR_2, &VAR_5, ((void*)0), 0);
   if (VAR_6) {
      return -1;
   }
   FUNC_1(&VAR_3, ((void*)0));

   return (int) FUNC_0(VAR_3.tv_sec, VAR_2.tv_sec);
}

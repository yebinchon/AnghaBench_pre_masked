
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockinfo {int stathz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int,struct clockinfo*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_2[2];
 size_t VAR_3;
 struct clockinfo VAR_4;

 VAR_2[0] = VAR_0;
 VAR_2[1] = VAR_1;
 VAR_3 = sizeof VAR_4;
 if (FUNC_1(VAR_2, 2, &VAR_4, &VAR_3, ((void*)0), 0) == -1)
  FUNC_0(1, "sysctl kern.clockrate");
 return VAR_4.stathz;
}

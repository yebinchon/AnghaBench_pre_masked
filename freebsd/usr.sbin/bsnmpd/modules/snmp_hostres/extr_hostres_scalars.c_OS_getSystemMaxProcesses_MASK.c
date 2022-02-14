
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int,int*,size_t*,int *,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(uint32_t *VAR_6)
{

 if (VAR_5 == 0) {
  int VAR_7[2] = { VAR_0, VAR_1 };
  int VAR_8;
  size_t VAR_9 = sizeof(VAR_8);

  if (FUNC_0(VAR_7, 2, &VAR_8, &VAR_9, ((void*)0), 0) == -1) {
   FUNC_1(VAR_2, "sysctl KERN_MAXPROC failed: %m");
   return (VAR_3);
  }
  VAR_5 = VAR_8;
 }

 *VAR_6 = VAR_5;
 return (VAR_4);
}

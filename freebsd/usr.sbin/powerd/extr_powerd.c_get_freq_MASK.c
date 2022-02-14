
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curfreq ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int*,size_t*,int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 size_t VAR_2;
 int VAR_3;

 VAR_2 = sizeof(VAR_3);
 if (FUNC_0(VAR_0, 4, &VAR_3, &VAR_2, ((void*)0), 0) != 0) {
  if (VAR_1)
   FUNC_1("error reading current CPU frequency");
  VAR_3 = 0;
 }
 return (VAR_3);
}

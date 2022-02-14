
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_3(void)
{
 VAR_4 = FUNC_0(((void*)0), VAR_1, VAR_1, ((void*)0));
 if (VAR_4) {
  VAR_5 = (HANDLE) FUNC_1(((void*)0), 0, VAR_3, ((void*)0), 0, ((void*)0));
  if (!VAR_5 )
   return VAR_2 = VAR_0,
    FUNC_2("cannot start timer thread");
 } else
  return VAR_2 = VAR_0,
   FUNC_2("cannot allocate resources for timer");
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_0 = FUNC_0("memtrace",
        VAR_2);
 if (!VAR_0)
  return -1;

 FUNC_1("enable", 0600, VAR_0,
       ((void*)0), &VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bzimage64_data {int * bootparams_buf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct bzimage64_data *VAR_1 = VAR_0;

 if (!VAR_1)
  return 0;

 FUNC_0(VAR_1->bootparams_buf);
 VAR_1->bootparams_buf = ((void*)0);

 return 0;
}

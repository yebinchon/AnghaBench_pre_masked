
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0);
out:
 return VAR_2;
}

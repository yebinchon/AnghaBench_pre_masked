
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int *) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_0);
out:
 return VAR_3;
}

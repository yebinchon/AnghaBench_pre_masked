
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int *,int ,char*) ;
 int FUNC_2 (unsigned int,void*) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned int VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4;

 VAR_4 = 1 << 8;
 VAR_3 = FUNC_0(VAR_2, VAR_4);
 if (VAR_3 == 0)
  goto out;

 FUNC_1(VAR_3, &VAR_0, VAR_1,
          "pcilvl");
 FUNC_2(VAR_3, (void *)VAR_2);

out:
 return VAR_3;
}

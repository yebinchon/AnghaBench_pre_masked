
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cpio_data*,char*) ;
 int FUNC_2 (unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static bool FUNC_7(struct cpio_data *VAR_1)
{
 unsigned int VAR_2 = 1, VAR_3, VAR_4 = 0, VAR_5;
 char VAR_6[30];

 if (FUNC_0(VAR_0))
  return 0;

 FUNC_2(&VAR_2, &VAR_3, &VAR_4, &VAR_5);

 FUNC_3(VAR_6, "intel-ucode/%02x-%02x-%02x",
        FUNC_4(VAR_2), FUNC_5(VAR_2), FUNC_6(VAR_2));

 return FUNC_1(VAR_1, VAR_6);
}

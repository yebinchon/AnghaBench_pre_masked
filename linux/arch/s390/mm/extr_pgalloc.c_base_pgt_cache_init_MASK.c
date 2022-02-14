
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*,unsigned long,unsigned long,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 static DEFINE_MUTEX(VAR_3);
 unsigned long VAR_4 = VAR_1;

 if (VAR_2)
  return 0;
 FUNC_1(&VAR_3);
 if (!VAR_2)
  VAR_2 = FUNC_0("base_pgt", VAR_4, VAR_4, 0, ((void*)0));
 FUNC_2(&VAR_3);
 return VAR_2 ? 0 : -VAR_0;
}

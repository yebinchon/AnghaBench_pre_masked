
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void const*,size_t,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ssize_t FUNC_2(const void *VAR_1, size_t VAR_2,
         loff_t VAR_3)
{
 ssize_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(((void*)0), VAR_1, VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5)
  return VAR_5;

 return VAR_4;
}

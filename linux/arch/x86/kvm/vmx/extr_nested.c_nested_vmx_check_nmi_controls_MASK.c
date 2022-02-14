
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vmcs12*,int ) ;
 int FUNC_2 (struct vmcs12*) ;
 scalar_t__ FUNC_3 (struct vmcs12*) ;

__attribute__((used)) static int FUNC_4(struct vmcs12 *VAR_2)
{
 if (FUNC_0(!FUNC_2(VAR_2) &&
        FUNC_3(VAR_2)))
  return -VAR_1;

 if (FUNC_0(!FUNC_3(VAR_2) &&
        FUNC_1(VAR_2, VAR_0)))
  return -VAR_1;

 return 0;
}

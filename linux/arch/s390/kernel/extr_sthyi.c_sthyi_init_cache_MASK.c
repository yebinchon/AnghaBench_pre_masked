
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; void* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 if (VAR_3.info)
  return 0;
 VAR_3.info = (void *)FUNC_0(VAR_1);
 if (!VAR_3.info)
  return -VAR_0;
 VAR_3.end = VAR_2 - 1;
 return 0;
}

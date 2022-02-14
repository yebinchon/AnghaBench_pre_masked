
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ directive_count; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_2 ;

void
FUNC_1(void)
{
 if (VAR_1.directive_count >= VAR_0) {
  FUNC_0(VAR_2,"too many directives (max %ld)", VAR_0);
 }
 VAR_1.directive_count++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_x; scalar_t__ vc_y; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vc_data*) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_2)
{
 if (VAR_2->vc_x != VAR_0 || VAR_2->vc_y != VAR_1)
  FUNC_0(VAR_2);
}

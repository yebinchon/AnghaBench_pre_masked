
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_x; int vc_y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct vc_data *VAR_5)
{
 VAR_3 = VAR_5->vc_x - (VAR_5->vc_x % VAR_0);
 VAR_4 = VAR_5->vc_y;
 VAR_1 = VAR_5->vc_x;
 VAR_2 = VAR_5->vc_y;
}

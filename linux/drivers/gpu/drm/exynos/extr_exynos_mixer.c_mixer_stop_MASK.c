
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mixer_context*,int ) ;
 int FUNC_1 (struct mixer_context*,int ,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct mixer_context *VAR_3)
{
 int VAR_4 = 20;

 FUNC_1(VAR_3, VAR_0, 0, VAR_2);

 while (!(FUNC_0(VAR_3, VAR_0) & VAR_1) &&
   --VAR_4)
  FUNC_2(10000, 12000);
}

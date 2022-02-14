
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_ctx {int name; scalar_t__ userData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xml_ctx *VAR_6, int VAR_7)
{
 int *VAR_8 = (int *)VAR_6->userData;

 if (VAR_7) {
  if (!FUNC_0(VAR_6->name, VAR_0)) {
   if ((*VAR_8 & VAR_4) &&
       (*VAR_8 & VAR_5)) {
    *VAR_8 |= VAR_3;
   }
   *VAR_8 &= VAR_3;
  } else if (!FUNC_0(VAR_6->name, VAR_2)) {
   *VAR_8 |= VAR_5;
  } else if (!FUNC_0(VAR_6->name, VAR_1)) {
   *VAR_8 |= VAR_4;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_encoder {int dummy; } ;
struct dcn10_link_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 struct dcn10_link_encoder* FUNC_1 (struct link_encoder*) ;

void FUNC_2(struct link_encoder *VAR_4,
   bool VAR_5)
{
 struct dcn10_link_encoder *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5)
  FUNC_0(VAR_3,
    VAR_1, 1);
 else {
  FUNC_0(VAR_3,
    VAR_1, 0);
  FUNC_0(VAR_2, VAR_0, 0x5);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdmi_context*,int ,int) ;
 int FUNC_1 (struct hdmi_context*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hdmi_context *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_7 = (VAR_5 % 9) ? 27000 : 30000;
 VAR_6 = 128 * VAR_5 / (27000000 / VAR_7);

 FUNC_1(VAR_4, VAR_3, 3, VAR_6);
 FUNC_1(VAR_4, VAR_2, 3, VAR_7);
 FUNC_1(VAR_4, VAR_1, 3, VAR_7);
 FUNC_0(VAR_4, VAR_0, 4);
}

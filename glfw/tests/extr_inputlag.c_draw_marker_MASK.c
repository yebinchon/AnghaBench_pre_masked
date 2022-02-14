
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_vec2 {int y; int x; } ;
struct nk_rect {int member_2; int member_3; int member_1; int member_0; } ;
struct nk_command_buffer {int dummy; } ;
struct nk_color {int dummy; } ;


 int FUNC_0 (struct nk_command_buffer*,struct nk_rect,struct nk_color) ;
 struct nk_color FUNC_1 (int,int,int) ;

void FUNC_2(struct nk_command_buffer* VAR_0, int VAR_1, struct nk_vec2 VAR_2)
{
    struct nk_color VAR_3[4] = { FUNC_1(255,0,0), FUNC_1(255,255,0), FUNC_1(0,255,0), FUNC_1(0,96,255) };
    struct nk_rect VAR_4 = { -5 + VAR_2.x, -5 + VAR_2.y, 10, 10 };
    FUNC_0(VAR_0, VAR_4, VAR_3[VAR_1]);
}

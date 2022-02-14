
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_context {int dummy; } ;
struct nk_color {int dummy; } ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nk_context*,int ,struct nk_color,int ,int,int ,int) ;
 int FUNC_1 (struct nk_context*) ;
 scalar_t__ FUNC_2 (struct nk_context*,unsigned short) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (struct nk_context*,char*) ;
 int FUNC_5 (char*,int,char*,int,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_6(struct nk_context* VAR_1,
                             struct nk_color VAR_2,
                             int VAR_3, unsigned short int* VAR_4)
{
    if (FUNC_0(VAR_1, VAR_0,
                               VAR_2, FUNC_3(255, 255, 255),
                               VAR_3, 0, 65535))
    {
        int VAR_5;
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        {
            char VAR_6[1024];
            if (FUNC_2(VAR_1, VAR_4[VAR_5]))
            {
                FUNC_5(VAR_6, sizeof(VAR_6), "#%u: %u (%0.5f) ",
                         VAR_5, VAR_4[VAR_5], VAR_4[VAR_5] / 65535.f);
                FUNC_4(VAR_1, VAR_6);
            }
        }

        FUNC_1(VAR_1);
    }
}

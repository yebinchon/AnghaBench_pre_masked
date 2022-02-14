
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_state {int linenr; } ;


 int FUNC_0 (struct apply_state*,unsigned int,char const*,int,int ) ;
 unsigned int FUNC_1 (char const*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct apply_state *VAR_0,
        const char *VAR_1,
        int VAR_2,
        unsigned VAR_3)
{
 unsigned VAR_4 = FUNC_1(VAR_1 + 1, VAR_2 - 1, VAR_3);

 FUNC_0(VAR_0, VAR_4, VAR_1 + 1, VAR_2 - 2, VAR_0->linenr);
}

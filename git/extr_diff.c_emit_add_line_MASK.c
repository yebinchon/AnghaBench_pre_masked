
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emit_callback {unsigned int ws_rule; int opt; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int,unsigned int) ;
 scalar_t__ FUNC_1 (struct emit_callback*,char const*,int) ;

__attribute__((used)) static void FUNC_2(struct emit_callback *VAR_3,
     const char *VAR_4, int VAR_5)
{
 unsigned VAR_6 = VAR_2 | VAR_3->ws_rule;
 if (FUNC_1(VAR_3, VAR_4, VAR_5))
  VAR_6 |= VAR_0;

 FUNC_0(VAR_3->opt, VAR_1, VAR_4, VAR_5, VAR_6);
}

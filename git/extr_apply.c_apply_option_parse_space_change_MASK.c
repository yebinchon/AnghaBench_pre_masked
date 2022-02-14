
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct apply_state* value; } ;
struct apply_state {int ws_ignore_action; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_2,
        const char *VAR_3, int VAR_4)
{
 struct apply_state *VAR_5 = VAR_2->value;

 FUNC_0(VAR_3);

 if (VAR_4)
  VAR_5->ws_ignore_action = VAR_1;
 else
  VAR_5->ws_ignore_action = VAR_0;
 return 0;
}

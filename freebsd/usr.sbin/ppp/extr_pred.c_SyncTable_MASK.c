
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pred1_state {size_t hash; int * dict; } ;


 int FUNC_0 (struct pred1_state*,int ) ;

__attribute__((used)) static void
FUNC_1(struct pred1_state *VAR_0, u_char *VAR_1, u_char *VAR_2, int VAR_3)
{
  while (VAR_3--) {
    *VAR_2++ = VAR_0->dict[VAR_0->hash] = *VAR_1;
    FUNC_0(VAR_0, *VAR_1++);
  }
}

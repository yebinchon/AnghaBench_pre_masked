
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;
struct pred1_state {unsigned char* dict; size_t hash; } ;


 int FUNC_0 (struct pred1_state*,int ) ;

__attribute__((used)) static int
FUNC_1(struct pred1_state *VAR_0, u_char *VAR_1, u_char *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5;
  unsigned char VAR_6, *VAR_7;

  VAR_7 = VAR_2;
  while (VAR_3) {
    VAR_6 = *VAR_1++;
    VAR_3--;
    for (VAR_4 = 0, VAR_5 = 1; VAR_4 < 8; VAR_4++, VAR_5 <<= 1) {
      if (VAR_6 & VAR_5) {
 *VAR_2 = VAR_0->dict[VAR_0->hash];
      } else {
 if (!VAR_3)
   break;
 VAR_0->dict[VAR_0->hash] = *VAR_1;
 *VAR_2 = *VAR_1++;
 VAR_3--;
      }
      FUNC_0(VAR_0, *VAR_2++);
    }
  }
  return (VAR_2 - VAR_7);
}

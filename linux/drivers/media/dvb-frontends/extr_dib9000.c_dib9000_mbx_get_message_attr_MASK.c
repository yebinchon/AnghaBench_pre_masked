
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_3__ {int** message_cache; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dib9000_state*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int*,size_t) ;

__attribute__((used)) static int FUNC_3(struct dib9000_state *VAR_1, u16 VAR_2, u16 * VAR_3, u8 * VAR_4, u16 VAR_5)
{
 u8 VAR_6;
 u16 *VAR_7;
 u16 VAR_8 = 30;

 *VAR_3 = 0;
 do {

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_7 = VAR_1->platform.risc.message_cache[VAR_6];
   if ((*VAR_7 >> 8) == VAR_2) {
    *VAR_4 = (*VAR_7 & 0xff) - 1;
    FUNC_2(VAR_3, VAR_7 + 1, (*VAR_4) * 2);
    *VAR_7 = 0;
    VAR_6 = 0;
    break;
   }
  }

  if (VAR_6 == 0)
   break;

  if (FUNC_0(VAR_1, VAR_5) == -1)
   return -1;

 } while (--VAR_8);

 if (VAR_8 == 0) {
  FUNC_1("waiting for message %d timed out\n", VAR_2);
  return -1;
 }

 return VAR_6 == 0;
}

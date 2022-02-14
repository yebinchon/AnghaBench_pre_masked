
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int** message_cache; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 int VAR_0 ;


 int FUNC_0 (struct dib9000_state*,int*,int,int) ;
 int FUNC_1 (struct dib9000_state*,int*,int ) ;
 int FUNC_2 (struct dib9000_state*,int*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dib9000_state *VAR_1, u16 VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 u16 *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 = VAR_1->platform.risc.message_cache[VAR_3];
  if (*VAR_5 == 0) {
   VAR_4 = FUNC_0(VAR_1, VAR_5, 1, VAR_2);



   switch (*VAR_5 >> 8) {
   case 128:
    FUNC_2(VAR_1, VAR_5 + 1, VAR_4);
    *VAR_5 = 0;
    break;






   default:
    break;
   }

   return 1;
  }
 }
 FUNC_3("MBX: no free cache-slot found for new message...\n");
 return -1;
}

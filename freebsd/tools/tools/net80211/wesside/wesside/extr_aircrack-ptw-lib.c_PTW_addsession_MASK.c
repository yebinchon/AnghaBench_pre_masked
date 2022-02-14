
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int* seen_iv; size_t sessions_collected; TYPE_2__* sessions; TYPE_1__** table; int packets_collected; } ;
struct TYPE_6__ {int keystream; int iv; } ;
struct TYPE_5__ {int votes; } ;
typedef TYPE_3__ PTW_attackstate ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int*,int*,int) ;
 int FUNC_1 (int ,int*,int ) ;

int FUNC_2(PTW_attackstate * VAR_5, uint8_t * VAR_6, uint8_t * VAR_7) {
 int VAR_8;
 int VAR_9;
 int VAR_10;
 uint8_t VAR_11[VAR_4];

 VAR_8 = (VAR_6[0] << 16) | (VAR_6[1] << 8) | (VAR_6[2]);
 VAR_9 = VAR_8/8;
 VAR_10 = 1 << (VAR_8%8);
 if ((VAR_5->seen_iv[VAR_9] & VAR_10) == 0) {
  VAR_5->packets_collected++;
  VAR_5->seen_iv[VAR_9] |= VAR_10;
  FUNC_0(VAR_6, VAR_7, VAR_11, VAR_4);
                for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
                 VAR_5->table[VAR_8][VAR_11[VAR_8]].votes++;
                }
  if (VAR_5->sessions_collected < VAR_0) {
   FUNC_1(VAR_5->sessions[VAR_5->sessions_collected].iv, VAR_6, VAR_1);
   FUNC_1(VAR_5->sessions[VAR_5->sessions_collected].keystream, VAR_7, VAR_3);
   VAR_5->sessions_collected++;
  }
  return 1;
 } else {
  return 0;
 }
}

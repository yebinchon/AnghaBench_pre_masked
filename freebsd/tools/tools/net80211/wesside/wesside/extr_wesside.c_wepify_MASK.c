
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long uLong ;
struct TYPE_2__ {int len; int * prga; int iv; } ;


 unsigned char* VAR_0 ;
 int FUNC_0 (int) ;
 long FUNC_1 (long,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 TYPE_1__ VAR_1 ;

void FUNC_3(unsigned char* VAR_2, int VAR_3) {
 uLong VAR_4;
 unsigned long *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3 + 4 <= VAR_1.len);


 FUNC_2(VAR_2, VAR_1.iv, 3);
 VAR_2 +=3;
 *VAR_2++ = 0;


 VAR_4 = FUNC_1(0L, VAR_0, 0);
 VAR_4 = FUNC_1(VAR_4, VAR_2, VAR_3);
 VAR_5 = (unsigned long*) (VAR_2+VAR_3);
 *VAR_5 = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_3 +4; VAR_6++)
  *VAR_2++ ^= VAR_1.prga[VAR_6];
}

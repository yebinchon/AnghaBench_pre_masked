
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct firedtv {int* channel_pid; int channel_active; } ;


 scalar_t__ FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_0, u8 *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 1;

 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < 16; VAR_2++) {
  if (FUNC_0(VAR_2, &VAR_0->channel_active)) {
   VAR_1[VAR_4++] = 0x13;
   VAR_1[VAR_4++] = 0x80;
   VAR_1[VAR_4++] = (VAR_0->channel_pid[VAR_2] >> 8) & 0x1f;
   VAR_1[VAR_4++] = VAR_0->channel_pid[VAR_2] & 0xff;
   VAR_1[VAR_4++] = 0x00;
   VAR_1[VAR_4++] = 0x00;
   VAR_3++;
  }
 }
 VAR_1[0] = VAR_3;

 return VAR_4;
}

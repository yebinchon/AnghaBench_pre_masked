
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; int member_16; int member_17; int member_18; int member_19; int member_20; int member_21; } ;
struct dos_header {int member_3; int track; int side; int sec; int crc; TYPE_1__ member_5; int member_4; int member_2; int member_1; int member_0; } ;
struct TYPE_6__ {int track; scalar_t__ trackbuf; TYPE_2__* type; } ;
struct TYPE_5__ {int heads; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*,unsigned char*,int) ;
 int FUNC_2 (struct dos_header*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static unsigned long *FUNC_3(int VAR_1, unsigned long *VAR_2, int VAR_3)
{
 static struct dos_header VAR_4={0,0,0,2,0,
   {78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78}};
 int VAR_5;
 static ushort VAR_6[2]={0,0x4e4e};

 VAR_1&=3;


 for(VAR_5=0;VAR_5<6;VAR_5++)
  *VAR_2++=0xaaaaaaaa;

 *VAR_2++=0x44894489;
 *VAR_2++=0x44895554;


 VAR_4.track=VAR_0[VAR_1].track/VAR_0[VAR_1].type->heads;
 VAR_4.side=VAR_0[VAR_1].track%VAR_0[VAR_1].type->heads;
 VAR_4.sec=VAR_3+1;
 VAR_4.crc=FUNC_2(&VAR_4);


 FUNC_1((ushort *)VAR_2,(unsigned char *) &VAR_4.track,28);
 VAR_2+=14;


 for(VAR_5=0;VAR_5<6;VAR_5++)
  *VAR_2++=0xaaaaaaaa;


 *VAR_2++=0x44894489;
 *VAR_2++=0x44895545;


 FUNC_1((ushort *)VAR_2,
    (unsigned char *)VAR_0[VAR_1].trackbuf+VAR_3*512,512);
 VAR_2+=256;


 VAR_6[0]=FUNC_0(VAR_0[VAR_1].trackbuf+VAR_3*512);
 FUNC_1((ushort *) VAR_2,(unsigned char *)VAR_6,4);
 VAR_2+=2;


 for(VAR_5=0;VAR_5<38;VAR_5++)
  *VAR_2++=0x92549254;

 return VAR_2;
}

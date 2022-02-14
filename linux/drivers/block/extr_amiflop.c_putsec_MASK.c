
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct header {int magic; int sect; int ord; void* datachk; void* hdrchk; scalar_t__* labels; int track; } ;
struct TYPE_6__ {scalar_t__ trackbuf; TYPE_2__* type; TYPE_1__* dtype; int track; } ;
struct TYPE_5__ {int sect_mult; } ;
struct TYPE_4__ {int sects; } ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (unsigned long*,int *,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static unsigned long *FUNC_2(int VAR_1, unsigned long *VAR_2, int VAR_3)
{
 struct header VAR_4;
 int VAR_5;

 VAR_1&=3;
 *VAR_2 = (VAR_2[-1]&1) ? 0x2AAAAAAA : 0xAAAAAAAA;
 VAR_2++;
 *VAR_2++ = 0x44894489;

 VAR_4.magic = 0xFF;
 VAR_4.track = VAR_0[VAR_1].track;
 VAR_4.sect = VAR_3;
 VAR_4.ord = VAR_0[VAR_1].dtype->sects * VAR_0[VAR_1].type->sect_mult - VAR_3;
 for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
  VAR_4.labels[VAR_5] = 0;
 VAR_4.hdrchk = FUNC_0((ulong *)&VAR_4,
         (char *)&VAR_4.hdrchk-(char *)&VAR_4);
 VAR_4.datachk = FUNC_0((ulong *)(VAR_0[VAR_1].trackbuf+VAR_3*512), 512);

 FUNC_1(VAR_2, (ulong *)&VAR_4.magic, 4);
 VAR_2 += 2;
 FUNC_1(VAR_2, (ulong *)&VAR_4.labels, 16);
 VAR_2 += 8;
 FUNC_1(VAR_2, (ulong *)&VAR_4.hdrchk, 4);
 VAR_2 += 2;
 FUNC_1(VAR_2, (ulong *)&VAR_4.datachk, 4);
 VAR_2 += 2;
 FUNC_1(VAR_2, (ulong *)(VAR_0[VAR_1].trackbuf+VAR_3*512), 512);
 VAR_2 += 256;

 return VAR_2;
}

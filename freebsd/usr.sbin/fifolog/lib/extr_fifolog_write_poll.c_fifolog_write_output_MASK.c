
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct fifolog_writer {int* obuf; int seq; int flag; int* cnt; int recno; int starttime; int lastwrite; scalar_t__ obufsize; TYPE_2__* ff; } ;
typedef int ssize_t ;
struct TYPE_4__ {long recsize; TYPE_1__* zs; int fd; } ;
struct TYPE_3__ {int* next_out; scalar_t__ avail_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int ,scalar_t__) ;
 int FUNC_3 (int ,int*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct fifolog_writer *VAR_7, int VAR_8, time_t VAR_9)
{
 long VAR_10, VAR_11 = VAR_7->ff->zs->next_out - VAR_7->obuf;
 ssize_t VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_10 = 4;
 FUNC_1(VAR_7->obuf, VAR_7->seq);
 VAR_7->obuf[VAR_10] = VAR_7->flag;
 VAR_10 += 1;
 if (VAR_7->flag & VAR_2) {
  FUNC_1(VAR_7->obuf + VAR_10, VAR_9);
  VAR_10 += 4;
 }

 FUNC_0(VAR_11 <= (long)VAR_7->ff->recsize);
 FUNC_0(VAR_11 >= VAR_10);


 if (VAR_11 == VAR_10)
  return (0);

 if (VAR_11 < (long)VAR_7->ff->recsize && VAR_8 == VAR_6)
  return (0);

 VAR_13 = VAR_7->ff->recsize - VAR_11;
 if (VAR_13 > 255) {
  FUNC_1(VAR_7->obuf + VAR_7->ff->recsize - 4, VAR_13);
  VAR_7->obuf[4] |= VAR_1;
 } else if (VAR_13 > 0) {
  VAR_7->obuf[VAR_7->ff->recsize - 1] = (uint8_t)VAR_13;
  VAR_7->obuf[4] |= VAR_0;
 }

 VAR_7->cnt[VAR_3] += VAR_11 - VAR_10;

 VAR_12 = FUNC_3(VAR_7->ff->fd, VAR_7->obuf, VAR_7->ff->recsize,
     (VAR_7->recno + 1) * VAR_7->ff->recsize);
 if (VAR_12 != VAR_7->ff->recsize)
  VAR_14 = -1;
 else
  VAR_14 = 1;

 VAR_7->cnt[VAR_5]++;
 VAR_7->cnt[VAR_4] = VAR_9 - VAR_7->starttime;

 VAR_7->lastwrite = VAR_9;




 VAR_7->seq++;
 VAR_7->recno++;
 VAR_7->flag = 0;

 FUNC_2(VAR_7->obuf, 0, VAR_7->obufsize);
 VAR_7->ff->zs->next_out = VAR_7->obuf + 5;
 VAR_7->ff->zs->avail_out = VAR_7->obufsize - 5;
 return (VAR_14);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct fifolog_writer {int lastsync; scalar_t__ ibufptr; TYPE_1__* ff; scalar_t__ obufsize; scalar_t__ obuf; int flag; int ibuf; int * cnt; scalar_t__ writerate; scalar_t__ lastwrite; scalar_t__ cleanup; scalar_t__ syncrate; } ;
struct TYPE_5__ {scalar_t__ avail_in; scalar_t__ avail_out; scalar_t__ next_out; int next_in; } ;
struct TYPE_4__ {TYPE_2__* zs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct fifolog_writer*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct fifolog_writer *VAR_9, time_t VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = 0;

 FUNC_0(VAR_10 != 0);
 if (VAR_9->cleanup || VAR_10 >= (int)(VAR_9->lastsync + VAR_9->syncrate)) {
  VAR_9->cleanup = 0;
  VAR_12 = VAR_4;
  VAR_9->cnt[VAR_2]++;
 } else if (VAR_10 >= (int)(VAR_9->lastwrite + VAR_9->writerate)) {
  VAR_12 = VAR_8;
  VAR_9->cnt[VAR_1]++;
 } else if (VAR_9->ibufptr == 0)
  return (0);
 else
  VAR_12 = VAR_5;

 VAR_9->ff->zs->avail_in = VAR_9->ibufptr;
 VAR_9->ff->zs->next_in = VAR_9->ibuf;

 while (1) {
  VAR_11 = FUNC_1(VAR_9->ff->zs, VAR_12);
  FUNC_0(VAR_11 == VAR_6 || VAR_11 == VAR_3 || VAR_11 == VAR_7);

  VAR_11 = FUNC_3(VAR_9, VAR_12, VAR_10);
  if (VAR_11 == 0)
   break;
  if (VAR_11 < 0)
   VAR_13 = -1;
 }
 FUNC_0(VAR_9->ff->zs->avail_in == 0);
 VAR_9->ibufptr = 0;
 if (VAR_12 == VAR_4) {
  VAR_9->flag |= VAR_0;
  VAR_9->ff->zs->next_out = VAR_9->obuf + 9;
  VAR_9->ff->zs->avail_out = VAR_9->obufsize - 9;
  VAR_9->lastsync = VAR_10;
  FUNC_0(VAR_6 == FUNC_2(VAR_9->ff->zs));
 }
 return (VAR_13);
}

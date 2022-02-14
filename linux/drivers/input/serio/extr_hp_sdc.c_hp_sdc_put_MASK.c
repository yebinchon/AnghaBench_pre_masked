
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int (* irqhook ) (int ,int *,int ,int ) ;int semaphore; } ;
struct TYPE_6__ {int actidx; int endidx; int* seq; int idx; TYPE_1__ act; } ;
typedef TYPE_2__ hp_sdc_transaction ;
struct TYPE_7__ {int wcurr; int rcurr; int im; int* r7; int wi; int rqty; int lock; int task; scalar_t__ ibf; TYPE_2__** tq; int rtq_lock; int rtime; scalar_t__ set_im; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

unsigned long FUNC_14(void)
{
 hp_sdc_transaction *VAR_13;
 uint8_t VAR_14;
 int VAR_15, VAR_16;

 int VAR_17 = 0;

 FUNC_10(&VAR_12.lock);



 if (VAR_12.ibf) {
  FUNC_1();
  if (VAR_12.ibf)
   goto finish;
 }

 anew:

 if (VAR_12.wcurr < 0)
  VAR_12.wcurr = 0;
 FUNC_5(&VAR_12.rtq_lock);
 if (VAR_12.rcurr == VAR_12.wcurr)
  VAR_12.wcurr++;
 FUNC_6(&VAR_12.rtq_lock);
 if (VAR_12.wcurr >= VAR_11)
  VAR_12.wcurr = 0;
 VAR_16 = VAR_12.wcurr;

 if (VAR_12.tq[VAR_16] != ((void*)0))
  goto start;

 while (++VAR_16 != VAR_12.wcurr) {
  if (VAR_16 >= VAR_11) {
   VAR_16 = -1;
   continue;
  }
  FUNC_5(&VAR_12.rtq_lock);
  if (VAR_12.rcurr == VAR_16) {
   FUNC_6(&VAR_12.rtq_lock);
   continue;
  }
  FUNC_6(&VAR_12.rtq_lock);
  if (VAR_12.tq[VAR_16] != ((void*)0))
   break;
 }
 if (VAR_16 == VAR_12.wcurr) {
  VAR_16 = -1;
 }
 VAR_12.wcurr = VAR_16;

 start:


 if (VAR_12.set_im) {
  FUNC_2(VAR_12.im | VAR_10);
  VAR_12.set_im = 0;
  goto finish;
 }

 if (VAR_12.wcurr == -1)
  goto done;

 VAR_13 = VAR_12.tq[VAR_16];
 VAR_15 = VAR_13->actidx;

 if (VAR_13->actidx >= VAR_13->endidx) {
  VAR_12.tq[VAR_16] = ((void*)0);

  VAR_12.wcurr++;
  if (VAR_12.wcurr >= VAR_11)
   VAR_12.wcurr = 0;
  goto finish;
 }

 VAR_14 = VAR_13->seq[VAR_15];
 VAR_15++;

 if (VAR_13->idx >= VAR_13->endidx) {
  if (VAR_14 & VAR_4)
   FUNC_3(VAR_13);
  VAR_12.tq[VAR_16] = ((void*)0);

  VAR_12.wcurr++;
  if (VAR_12.wcurr >= VAR_11)
   VAR_12.wcurr = 0;
  goto finish;
 }

 while (VAR_14 & VAR_7) {
  if (VAR_13->idx != VAR_15) {
   VAR_15++;
   VAR_14 &= ~VAR_7;
   break;
  }
  FUNC_2(VAR_13->seq[VAR_15]);
  VAR_13->idx++;

  if ((VAR_14 & VAR_5) == VAR_7)
   goto actdone;

  if (VAR_14 & VAR_2)
   VAR_13->idx++;
  goto finish;
 }
 if (VAR_14 & VAR_2) {
  int VAR_18;

  VAR_18 = VAR_13->seq[VAR_15];
  VAR_15++;
  if (VAR_13->idx - VAR_15 < VAR_18) {
   FUNC_0(VAR_13->seq[VAR_13->idx]);
   VAR_13->idx++;

   if (VAR_13->idx - VAR_15 >= VAR_18 &&
       (VAR_14 & VAR_5) == VAR_2)
    goto actdone;
   goto finish;
  }
  VAR_15 += VAR_18;
  VAR_14 &= ~VAR_2;
 } else
     while (VAR_14 & VAR_3) {
  int VAR_19;
  uint8_t VAR_20[4];

  VAR_19 = VAR_13->seq[VAR_15];
  if (VAR_15 != VAR_13->idx) {
   VAR_15++;
   VAR_15 += !!(VAR_19 & 1);
   VAR_15 += !!(VAR_19 & 2);
   VAR_15 += !!(VAR_19 & 4);
   VAR_15 += !!(VAR_19 & 8);
   VAR_14 &= ~VAR_3;
   break;
  }

  VAR_20[0] = (VAR_19 & 1) ? VAR_13->seq[++VAR_15] : VAR_12.r7[0];
  VAR_20[1] = (VAR_19 & 2) ? VAR_13->seq[++VAR_15] : VAR_12.r7[1];
  VAR_20[2] = (VAR_19 & 4) ? VAR_13->seq[++VAR_15] : VAR_12.r7[2];
  VAR_20[3] = (VAR_19 & 8) ? VAR_13->seq[++VAR_15] : VAR_12.r7[3];

  if (VAR_12.wi > 0x73 || VAR_12.wi < 0x70 ||
      VAR_20[VAR_12.wi - 0x70] == VAR_12.r7[VAR_12.wi - 0x70]) {
   int VAR_21 = 0;


   while (VAR_21 < 4 && VAR_20[VAR_21] == VAR_12.r7[VAR_21])
    VAR_21++;

   if (VAR_21 < 4) {
    FUNC_2(VAR_9 + VAR_21);
    VAR_12.wi = 0x70 + VAR_21;
    goto finish;
   }

   VAR_15++;
   if ((VAR_14 & VAR_5) == VAR_3)
    goto actdone;

   VAR_13->idx = VAR_15;
   VAR_14 &= ~VAR_3;
   break;
  }

  FUNC_0(VAR_20[VAR_12.wi - 0x70]);
  VAR_12.r7[VAR_12.wi - 0x70] = VAR_20[VAR_12.wi - 0x70];
  VAR_12.wi++;
  {
   int VAR_22 = 0;

   while ((VAR_22 < 4) && VAR_20[VAR_22] == VAR_12.r7[VAR_22])
    VAR_22++;
   if (VAR_22 >= 4) {
    VAR_13->idx = VAR_15 + 1;
    if ((VAR_14 & VAR_5) ==
        VAR_3)
     goto actdone;
   }
  }
  goto finish;
 }


 FUNC_5(&VAR_12.rtq_lock);
 if (VAR_12.rcurr >= 0) {
  FUNC_6(&VAR_12.rtq_lock);
  goto finish;
 }
 FUNC_6(&VAR_12.rtq_lock);


 if (VAR_14 & VAR_6) {
  uint8_t VAR_23;


  VAR_23 = VAR_13->seq[VAR_15];
  VAR_13->idx++;
  if (VAR_14 & VAR_1) {


   VAR_12.rqty = VAR_13->seq[VAR_13->idx];
   VAR_12.rtime = FUNC_4();
   VAR_13->idx++;

   FUNC_11(&VAR_12.rtq_lock);
   VAR_12.rcurr = VAR_16;
   FUNC_13(&VAR_12.rtq_lock);
   FUNC_2(VAR_23);
   goto finish;
  }
  FUNC_2(VAR_23);
  goto actdone;
 }

 actdone:
 if (VAR_14 & VAR_8)
  FUNC_9(VAR_13->act.semaphore);
 else if (VAR_14 & VAR_0)
  VAR_13->act.irqhook(0,((void*)0),0,0);

 if (VAR_13->idx >= VAR_13->endidx) {
  if (VAR_14 & VAR_4)
   FUNC_3(VAR_13);
  VAR_12.tq[VAR_16] = ((void*)0);
 } else {
  VAR_13->actidx = VAR_15 + 1;
  VAR_13->idx = VAR_15 + 2;
 }

 VAR_12.wcurr++;
 if (VAR_12.wcurr >= VAR_11)
  VAR_12.wcurr = 0;

 finish:


 if (!VAR_12.ibf && VAR_17++ < 20)
  goto anew;

 done:
 if (VAR_12.wcurr >= 0)
  FUNC_8(&VAR_12.task);
 FUNC_12(&VAR_12.lock);

 return 0;
}

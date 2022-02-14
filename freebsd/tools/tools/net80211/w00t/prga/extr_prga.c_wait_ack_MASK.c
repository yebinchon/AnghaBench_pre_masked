
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct params {int data_try; scalar_t__ frag; int state; struct timeval last; int mac; scalar_t__ rx; } ;
struct ieee80211_frame {int i_addr1; } ;
typedef int fd_set ;
typedef int buf ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct timeval*,struct timeval*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct ieee80211_frame*,int ,int ) ;
 struct ieee80211_frame* FUNC_6 (char*,int*) ;
 int FUNC_7 (struct timeval*,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_11 (struct params*) ;
 int FUNC_12 (scalar_t__,char*,int) ;

void FUNC_13(struct params *VAR_5)
{
 struct timeval VAR_6;
 int VAR_7;
 int VAR_8 = 10*1000;
 fd_set VAR_9;
 int VAR_10;
 char VAR_11[4096];
 struct ieee80211_frame *VAR_12;

 if (FUNC_7(&VAR_6, ((void*)0)) == -1)
  FUNC_4(1, "gettimeofday()");


 VAR_7 = FUNC_3(&VAR_5->last, &VAR_6);
 if (VAR_7 >= VAR_8) {
  if (VAR_5->data_try >= 3) {



   VAR_5->state = VAR_3;
   return;
  }



  FUNC_11(VAR_5);
  VAR_7 = 0;
 }

 VAR_7 = VAR_8 - VAR_7;
 VAR_6.tv_sec = VAR_7/1000/1000;
 VAR_6.tv_usec = VAR_7 - VAR_6.tv_sec*1000*1000;

 FUNC_2(&VAR_9);
 FUNC_1(VAR_5->rx, &VAR_9);
 if (FUNC_10(VAR_5->rx+1, &VAR_9, ((void*)0), ((void*)0), &VAR_6) == -1)
  FUNC_4(1, "select()");

 if (!FUNC_0(VAR_5->rx, &VAR_9))
  return;


        VAR_10 = FUNC_12(VAR_5->rx, VAR_11, sizeof(VAR_11));
        if (VAR_10 == -1)
                FUNC_4(1, "sniff()");

        VAR_12 = FUNC_6(VAR_11, &VAR_10);
        if (!VAR_12)
                return;

 if (!FUNC_5(VAR_12, VAR_1, VAR_0))
  return;

 if (FUNC_8(VAR_5->mac, VAR_12->i_addr1, 6) != 0)
  return;


 if (VAR_5->frag == 0) {
  VAR_5->state = VAR_4;
  if (FUNC_7(&VAR_5->last, ((void*)0)) == -1)
   FUNC_4(1, "gettimeofday()");
 }
 else
  VAR_5->state = VAR_2;
}

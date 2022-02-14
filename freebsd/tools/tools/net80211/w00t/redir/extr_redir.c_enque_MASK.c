
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int live; char* buf; int len; scalar_t__ id; struct ieee80211_frame* wh; struct queue* next; } ;
struct params {int id; struct queue* q; } ;
struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (struct queue*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct queue*,int ,int) ;
 int FUNC_4 (char*,int) ;

void FUNC_5(struct params *VAR_0, char **VAR_1, struct ieee80211_frame *VAR_2, int VAR_3)
{
 struct queue *VAR_4 = VAR_0->q;
 int VAR_5 = 0;
 char *VAR_6 = ((void*)0);
 struct queue *VAR_7 = ((void*)0);


 while (VAR_4) {
  if (VAR_4->live)
   VAR_5++;
  else {

   VAR_6 = VAR_4->buf;
   break;
  }

  VAR_7 = VAR_4;
  VAR_4 = VAR_4->next;
 }


 if (!VAR_4) {
  VAR_4 = (struct queue*) FUNC_2(sizeof(*VAR_4));
  if (!VAR_4)
   FUNC_1(1, "malloc()");
  FUNC_3(VAR_4, 0, sizeof(*VAR_4));


  if (!VAR_0->q)
   VAR_0->q = VAR_4;
  else {
   FUNC_0(VAR_7);
   VAR_7->next = VAR_4;
  }
 }

 VAR_4->live = 1;
 VAR_4->buf = *VAR_1;
 VAR_4->len = VAR_3;
 VAR_4->wh = VAR_2;
 VAR_4->id = VAR_0->id++;

 VAR_5++;

 if (VAR_5 > 5)
  FUNC_4("Enque.  Size: %d\n", VAR_5);
 *VAR_1 = VAR_6;
}

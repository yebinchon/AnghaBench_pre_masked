
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue {int id; int len; scalar_t__ live; struct queue* next; TYPE_1__* wh; } ;
struct params {int buddy_got; struct queue* q; int state; int tap; scalar_t__ buddy_data; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int mac ;
typedef int iov ;
struct TYPE_2__ {int* i_fc; int i_addr3; int i_addr1; int i_addr2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct params*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct params*) ;
 int FUNC_8 (int ,struct iovec*,int) ;

void FUNC_9(struct params *VAR_2)
{
 unsigned short *VAR_3 = (unsigned short*) VAR_2->buddy_data;
 int VAR_4, VAR_5, VAR_6;
 struct queue *VAR_7 = VAR_2->q;
 struct queue *VAR_8 = VAR_2->q;
 char VAR_9[12];
 struct iovec VAR_10[2];

 VAR_4 = FUNC_5(*VAR_3++);
 VAR_5 = FUNC_5(*VAR_3++);

 VAR_6 = VAR_5 + 4 - VAR_2->buddy_got;

 FUNC_0(VAR_6 > 0);
 if (!FUNC_1(VAR_2, VAR_6))
  return;





 VAR_2->buddy_got = 0;


 if (!VAR_7)
  return;
 if (!VAR_7->live)
  return;


 if (VAR_7->id != VAR_4) {
  FUNC_6("Diff ID\n");
  return;
 }

 VAR_6 = VAR_7->len - sizeof(*VAR_7->wh) - 4 - 4;
 if (VAR_6 != VAR_5) {
  FUNC_6("Diff len\n");
  return;
 }


 if (VAR_7->wh->i_fc[1] & VAR_0) {
  FUNC_4(VAR_9, VAR_7->wh->i_addr3, 6);
  FUNC_4(&VAR_9[6], VAR_7->wh->i_addr2, 6);
 } else {
  FUNC_4(VAR_9, VAR_7->wh->i_addr1, 6);
  FUNC_4(&VAR_9[6], VAR_7->wh->i_addr3, 6);
 }
 VAR_10[0].iov_base = VAR_9;
 VAR_10[0].iov_len = sizeof(VAR_9);
 VAR_10[1].iov_base = (char*)VAR_3 + 8 - 2;
 VAR_10[1].iov_len = VAR_5 - 8 + 2;

 VAR_6 = FUNC_8(VAR_2->tap, VAR_10, sizeof(VAR_10)/sizeof(struct iovec));
 if (VAR_6 == -1)
  FUNC_2(1, "writev()");
 if (VAR_6 != (14+(VAR_5-8))) {
  FUNC_6("Short write %d\n", VAR_6);
  FUNC_3(1);
 }


 VAR_7->live = 0;
 if (VAR_7->next) {

  VAR_2->q = VAR_7->next;

  while (VAR_8) {
   if (!VAR_8->next) {
    VAR_8->next = VAR_7;
    VAR_7->next = 0;
    break;
   }
   VAR_8 = VAR_8->next;
  }
 }


 VAR_2->state = VAR_1;
 if (VAR_2->q->live)
  FUNC_7(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; int nbytes; size_t* data; struct adb_request* next; scalar_t__ sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct adb_request* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct adb_request* VAR_4 ;
 int** VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ VAR_8 ;

int
FUNC_3(struct adb_request *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_7 == VAR_8) {
  VAR_9->complete = 1;
  return -VAR_1;
 }
 if (VAR_9->nbytes <= 0) {
  VAR_9->complete = 1;
  return 0;
 }
 VAR_11 = VAR_5[VAR_9->data[0]][0];
 if (VAR_11 >= 0 && VAR_9->nbytes != VAR_11 + 1) {
  VAR_9->complete = 1;
  return -VAR_0;
 }

 VAR_9->next = ((void*)0);
 VAR_9->sent = 0;
 VAR_9->complete = 0;

 FUNC_1(&VAR_6, VAR_10);
 if (VAR_2) {
  VAR_4->next = VAR_9;
  VAR_4 = VAR_9;
 } else {
  VAR_2 = VAR_9;
  VAR_4 = VAR_9;
  if (VAR_7 == VAR_3)
   FUNC_0();
 }
 FUNC_2(&VAR_6, VAR_10);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int nbytes; scalar_t__* data; int complete; struct adb_request* next; scalar_t__ reply_len; scalar_t__ sent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 struct adb_request* VAR_4 ;
 scalar_t__ VAR_5 ;
 struct adb_request* VAR_6 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_3(struct adb_request *VAR_7)
{
    unsigned long VAR_8;

    if (VAR_7->nbytes < 2 || VAR_7->data[0] > VAR_0) {
 VAR_7->complete = 1;
 return -VAR_1;
    }
    VAR_7->next = ((void*)0);
    VAR_7->sent = 0;
    VAR_7->complete = 0;
    VAR_7->reply_len = 0;

    FUNC_1(&VAR_2, VAR_8);
    if (VAR_4 != 0) {
 VAR_6->next = VAR_7;
 VAR_6 = VAR_7;
    } else {
 VAR_4 = VAR_7;
 VAR_6 = VAR_7;
 if (VAR_3 == VAR_5)
     FUNC_0();
    }
    FUNC_2(&VAR_2, VAR_8);

    return 0;
}

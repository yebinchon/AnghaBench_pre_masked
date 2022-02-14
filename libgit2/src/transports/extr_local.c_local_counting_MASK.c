
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* progress_cb ) (int ,int,int ) ;int message_cb_payload; } ;
typedef TYPE_1__ transport_local ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_5, unsigned int VAR_6, unsigned int VAR_7, void *VAR_8)
{
 git_buf VAR_9 = VAR_0;
 transport_local *VAR_10 = VAR_8;
 int VAR_11;

 if (!VAR_10->progress_cb)
  return 0;

 if (VAR_5 == VAR_1) {
  FUNC_4(&VAR_9, VAR_4, VAR_6);
 } else if (VAR_5 == VAR_2) {
  float VAR_12 = (((float) VAR_6) / VAR_7) * 100;
  FUNC_4(&VAR_9, VAR_3, VAR_12, VAR_6, VAR_7);
  if (VAR_6 == VAR_7)
   FUNC_4(&VAR_9, ", done\n");
  else
   FUNC_5(&VAR_9, '\r');

 }

 if (FUNC_3(&VAR_9))
  return -1;

 VAR_11 = VAR_10->progress_cb(FUNC_0(&VAR_9), (int)FUNC_2(&VAR_9), VAR_10->message_cb_payload);
 FUNC_1(&VAR_9);

 return VAR_11;
}

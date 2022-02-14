
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct brcm_sba_command {int flags; int data_len; int data; int cmd; int resp_len; int resp; } ;
struct TYPE_2__ {size_t cmds_count; struct brcm_sba_command* cmds; } ;
struct brcm_message {TYPE_1__ sba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t,size_t,size_t,int ,void**,size_t*,void*,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void *FUNC_10(struct brcm_message *VAR_4, u32 VAR_5,
         u32 VAR_6, void *VAR_7, u32 VAR_8,
         void *VAR_9, void *VAR_10)
{
 u64 VAR_11;
 u32 VAR_12, VAR_13 = 0;
 struct brcm_sba_command *VAR_14;
 void *VAR_15 = VAR_7;


 for (VAR_12 = 0; VAR_12 < VAR_4->sba.cmds_count; VAR_12++) {
  VAR_14 = &VAR_4->sba.cmds[VAR_12];

  if ((VAR_14->flags & VAR_1) &&
      (VAR_14->flags & VAR_0)) {

   VAR_11 = FUNC_0(VAR_14->resp, VAR_14->resp_len);
   FUNC_2(VAR_13, VAR_5, VAR_6,
          VAR_11, &VAR_7, &VAR_8,
          VAR_9, VAR_10);
   VAR_13++;
  } else if (VAR_14->flags & VAR_1) {

   VAR_11 = FUNC_1(VAR_14->resp, VAR_14->resp_len);
   FUNC_2(VAR_13, VAR_5, VAR_6,
          VAR_11, &VAR_7, &VAR_8,
          VAR_9, VAR_10);
   VAR_13++;
  }

  if (VAR_14->flags & VAR_0) {

   VAR_11 = FUNC_1(VAR_14->data, VAR_14->data_len);
   FUNC_2(VAR_13, VAR_5, VAR_6,
          VAR_11, &VAR_7, &VAR_8,
          VAR_9, VAR_10);
   VAR_13++;
  }

  if (VAR_14->flags & VAR_2) {

   VAR_11 = FUNC_4(VAR_14->cmd);
   FUNC_2(VAR_13, VAR_5, VAR_6,
          VAR_11, &VAR_7, &VAR_8,
          VAR_9, VAR_10);
   VAR_13++;
  } else {

   VAR_11 = FUNC_5(VAR_14->cmd);
   FUNC_2(VAR_13, VAR_5, VAR_6,
          VAR_11, &VAR_7, &VAR_8,
          VAR_9, VAR_10);
   VAR_13++;
  }

  if ((VAR_14->flags & VAR_2) ||
      (VAR_14->flags & VAR_3)) {

   VAR_11 = FUNC_7(VAR_14->data, VAR_14->data_len);
   FUNC_2(VAR_13, VAR_5, VAR_6,
          VAR_11, &VAR_7, &VAR_8,
          VAR_9, VAR_10);
   VAR_13++;
  }
 }


 FUNC_8(VAR_7, FUNC_6(!VAR_8));


 FUNC_9();


 FUNC_3(VAR_15);

 return VAR_7;
}

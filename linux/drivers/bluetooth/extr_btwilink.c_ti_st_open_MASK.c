
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ti_st {int reg_status; int * st_write; int wait_reg_completion; } ;
struct hci_dev {int name; } ;
struct TYPE_4__ {int * write; int reg_complete_cb; int recv; int max_frame_size; struct ti_st* priv_data; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ti_st* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* VAR_9 ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_10)
{
 unsigned long VAR_11;
 struct ti_st *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0("%s %p", VAR_10->name, VAR_10);


 VAR_12 = FUNC_2(VAR_10);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  VAR_9[VAR_14].priv_data = VAR_12;
  VAR_9[VAR_14].max_frame_size = VAR_5;
  VAR_9[VAR_14].recv = VAR_7;
  VAR_9[VAR_14].reg_complete_cb = VAR_8;


  FUNC_3(&VAR_12->wait_reg_completion);





  VAR_12->reg_status = -VAR_2;

  VAR_13 = FUNC_5(&VAR_9[VAR_14]);
  if (!VAR_13)
   goto done;

  if (VAR_13 != -VAR_2) {
   FUNC_1("st_register failed %d", VAR_13);
   return VAR_13;
  }




  FUNC_0("waiting for registration "
    "completion signal from ST");
  VAR_11 = FUNC_7
   (&VAR_12->wait_reg_completion,
    FUNC_4(VAR_0));
  if (!VAR_11) {
   FUNC_1("Timeout(%d sec),didn't get reg "
     "completion signal from ST",
     VAR_0 / 1000);
   return -VAR_4;
  }




  if (VAR_12->reg_status != 0) {
   FUNC_1("ST registration completed with invalid "
     "status %d", VAR_12->reg_status);
   return -VAR_1;
  }

done:
  VAR_12->st_write = VAR_9[VAR_14].write;
  if (!VAR_12->st_write) {
   FUNC_1("undefined ST write function");
   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {

    VAR_13 = FUNC_6(&VAR_9[VAR_14]);
    if (VAR_13)
     FUNC_1("st_unregister() failed with "
       "error %d", VAR_13);
    VAR_12->st_write = ((void*)0);
   }
   return -VAR_3;
  }
 }
 return 0;
}

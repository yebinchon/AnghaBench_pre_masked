
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ti_st {int * st_write; } ;
struct hci_dev {int dummy; } ;
struct TYPE_3__ {int chnl_id; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 struct ti_st* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_2)
{
 int VAR_3, VAR_4;
 struct ti_st *VAR_5 = FUNC_1(VAR_2);

 for (VAR_4 = VAR_0-1; VAR_4 >= 0; VAR_4--) {
  VAR_3 = FUNC_2(&VAR_1[VAR_4]);
  if (VAR_3)
   FUNC_0("st_unregister(%d) failed with error %d",
     VAR_1[VAR_4].chnl_id, VAR_3);
 }

 VAR_5->st_write = ((void*)0);

 return VAR_3;
}

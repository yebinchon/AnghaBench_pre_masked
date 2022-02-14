
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adb_ids {int nids; int* id; } ;
struct TYPE_2__ {int original_address; int handler_id; void (* handler ) (unsigned char*,int,int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(int VAR_3, int VAR_4, struct adb_ids *VAR_5,
      void (*VAR_6)(unsigned char *, int, int))
{
 int VAR_7;

 FUNC_0(&VAR_2);
 VAR_5->nids = 0;
 for (VAR_7 = 1; VAR_7 < 16; VAR_7++) {
  if ((VAR_0[VAR_7].original_address == VAR_3) &&
      (!VAR_4 || (VAR_4 == VAR_0[VAR_7].handler_id) ||
      FUNC_3(VAR_7, VAR_4))) {
   if (VAR_0[VAR_7].handler != 0) {
    FUNC_2("Two handlers for ADB device %d\n",
           VAR_3);
    continue;
   }
   FUNC_4(&VAR_1);
   VAR_0[VAR_7].handler = VAR_6;
   FUNC_5(&VAR_1);
   VAR_5->id[VAR_5->nids++] = VAR_7;
  }
 }
 FUNC_1(&VAR_2);
 return VAR_5->nids;
}

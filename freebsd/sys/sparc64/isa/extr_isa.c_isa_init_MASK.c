
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ofw_isa_intr_t ;
typedef int device_t ;
struct TYPE_4__ {int size; } ;


 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;


 int FUNC_2 (int ,char*,int,void**) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (char*) ;

void
FUNC_8(device_t VAR_8)
{
 device_t VAR_9;
 int VAR_10;


 VAR_9 = FUNC_3(VAR_8);
 VAR_5 = FUNC_5(VAR_9);
 VAR_6 = FUNC_2(VAR_5, "ranges",
     sizeof(*VAR_7), (void **)&VAR_7);
 if (VAR_6 <= 0)
  FUNC_7("isa_init: cannot get bridge range property");

 FUNC_6(VAR_5, &VAR_0, sizeof(ofw_isa_intr_t));

 FUNC_4(VAR_8, VAR_5);

 for (VAR_10 = VAR_6 - 1; VAR_10 >= 0; VAR_10--) {
  switch(FUNC_1(&VAR_7[VAR_10])) {
  case 129:

   VAR_1 = FUNC_0(&VAR_7[VAR_10]);
   VAR_2 = VAR_7[VAR_10].size;
   break;
  case 128:

   VAR_3 = FUNC_0(&VAR_7[VAR_10]);
   VAR_4 = VAR_7[VAR_10].size;
   break;
  }
 }
}

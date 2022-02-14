
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union qxl_release_info {int next; } ;
typedef int uint64_t ;
struct qxl_release {int type; } ;
struct qxl_device {int release_ring; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;



 int FUNC_2 (struct qxl_device*,struct qxl_release*) ;
 struct qxl_release* FUNC_3 (struct qxl_device*,int) ;
 union qxl_release_info* FUNC_4 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_5 (struct qxl_device*,struct qxl_release*,union qxl_release_info*) ;
 scalar_t__ FUNC_6 (int ,int*) ;

int FUNC_7(struct qxl_device *VAR_0)
{
 struct qxl_release *VAR_1;
 uint64_t VAR_2, VAR_3;
 int VAR_4 = 0;
 union qxl_release_info *VAR_5;

 while (FUNC_6(VAR_0->release_ring, &VAR_2)) {
  FUNC_0("popped %lld\n", VAR_2);
  while (VAR_2) {
   VAR_1 = FUNC_3(VAR_0, VAR_2);
   if (VAR_1 == ((void*)0))
    break;

   VAR_5 = FUNC_4(VAR_0, VAR_1);
   VAR_3 = VAR_5->next;
   FUNC_5(VAR_0, VAR_1, VAR_5);

   FUNC_0("popped %lld, next %lld\n", VAR_2,
      VAR_3);

   switch (VAR_1->type) {
   case 129:
   case 128:
   case 130:
    break;
   default:
    FUNC_1("unexpected release type\n");
    break;
   }
   VAR_2 = VAR_3;

   FUNC_2(VAR_0, VAR_1);
   ++VAR_4;
  }
 }

 FUNC_0("%d\n", VAR_4);

 return VAR_4;
}

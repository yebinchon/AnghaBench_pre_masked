
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int broadcast_channel_allocated; int device; } ;


 int FUNC_0 (int ,void*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fw_card*,int,unsigned long long,int*,int*,int) ;
 int FUNC_2 (struct fw_card*,char*) ;

__attribute__((used)) static void FUNC_3(struct fw_card *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if (!VAR_1->broadcast_channel_allocated) {
  FUNC_1(VAR_1, VAR_2, 1ULL << 31,
           &VAR_3, &VAR_4, 1);
  if (VAR_3 != 31) {
   FUNC_2(VAR_1, "failed to allocate broadcast channel\n");
   return;
  }
  VAR_1->broadcast_channel_allocated = 1;
 }

 FUNC_0(VAR_1->device, (void *)(long)VAR_2,
         VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_crypto {int owner; int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct virtio_crypto *VAR_1)
{
 if (FUNC_0(1, &VAR_1->ref_count) == 1)
  if (!FUNC_1(VAR_1->owner))
   return -VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct virtio_crypto {int dummy; } ;
struct TYPE_3__ {int active_devs; int algo; int algonum; int service; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct virtio_crypto*,int ,int ) ;
 TYPE_1__* VAR_1 ;

void FUNC_5(struct virtio_crypto *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(&VAR_0);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {

  uint32_t VAR_4 = VAR_1[VAR_3].service;
  uint32_t VAR_5 = VAR_1[VAR_3].algonum;

  if (VAR_1[VAR_3].active_devs == 0 ||
      !FUNC_4(VAR_2, VAR_4, VAR_5))
   continue;

  if (VAR_1[VAR_3].active_devs == 1)
   FUNC_1(&VAR_1[VAR_3].algo);

  VAR_1[VAR_3].active_devs--;
 }

 FUNC_3(&VAR_0);
}

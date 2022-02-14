
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int event_free; int event_bitmap; int dev; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct etnaviv_gpu *VAR_0, unsigned int VAR_1)
{
 if (!FUNC_3(VAR_1, VAR_0->event_bitmap)) {
  FUNC_2(VAR_0->dev, "event %u is already marked as free",
    VAR_1);
 } else {
  FUNC_0(VAR_1, VAR_0->event_bitmap);
  FUNC_1(&VAR_0->event_free);
 }
}

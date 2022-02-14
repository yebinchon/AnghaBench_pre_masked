
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_device {TYPE_1__* bitmap; } ;
struct TYPE_3__ {int bm_pages; int bm_number_of_pages; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct drbd_device *VAR_0)
{
 if (!FUNC_2(VAR_0->bitmap))
  return;
 FUNC_0(VAR_0->bitmap->bm_pages, VAR_0->bitmap->bm_number_of_pages);
 FUNC_1(VAR_0->bitmap->bm_pages);
 FUNC_3(VAR_0->bitmap);
 VAR_0->bitmap = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_usages {int list; int confidence_state; void* inrange_state; void* tip_state; void* contactid; void* a; void* h; void* w; void* p; void* cy; void* cx; void* y; void* x; } ;
struct mt_application {int mt_usages; } ;
struct hid_device {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct mt_usages* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct mt_usages *FUNC_2(struct hid_device *VAR_4,
        struct mt_application *VAR_5)
{
 struct mt_usages *VAR_6;

 VAR_6 = FUNC_0(&VAR_4->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return ((void*)0);


 VAR_6->x = VAR_2;
 VAR_6->y = VAR_2;
 VAR_6->cx = VAR_2;
 VAR_6->cy = VAR_2;
 VAR_6->p = VAR_2;
 VAR_6->w = VAR_2;
 VAR_6->h = VAR_2;
 VAR_6->a = VAR_2;
 VAR_6->contactid = VAR_2;
 VAR_6->tip_state = VAR_0;
 VAR_6->inrange_state = VAR_0;
 VAR_6->confidence_state = VAR_1;

 FUNC_1(&VAR_6->list, &VAR_5->mt_usages);

 return VAR_6;
}

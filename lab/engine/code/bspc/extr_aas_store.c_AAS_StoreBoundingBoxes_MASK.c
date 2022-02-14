
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int aas_bbox_t ;
struct TYPE_6__ {int numbboxes; int bboxes; } ;
struct TYPE_5__ {int numbboxes; int bboxes; } ;
struct TYPE_4__ {int max_bboxes; } ;


 int FUNC_0 (char*,int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(void)
{
 if (VAR_1.numbboxes > VAR_2.max_bboxes)
 {
  FUNC_0("more than %d bounding boxes", VAR_2.max_bboxes);
 }
 VAR_0.numbboxes = VAR_1.numbboxes;
 FUNC_1(VAR_0.bboxes, VAR_1.bboxes, VAR_1.numbboxes * sizeof(aas_bbox_t));
}

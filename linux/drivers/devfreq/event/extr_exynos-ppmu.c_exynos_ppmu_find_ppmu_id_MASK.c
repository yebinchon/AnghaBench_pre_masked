
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct devfreq_event_dev {TYPE_1__* desc; } ;
struct TYPE_5__ {int id; int name; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct devfreq_event_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (!FUNC_1(VAR_2->desc->name, VAR_1[VAR_3].name))
   return VAR_1[VAR_3].id;

 return -VAR_0;
}

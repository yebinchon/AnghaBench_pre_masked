
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int users; } ;
struct cyapa {scalar_t__ gen; TYPE_2__* ops; scalar_t__ operational; TYPE_1__* client; struct input_dev* input; } ;
struct TYPE_4__ {int (* set_power_mode ) (struct cyapa*,int ,int ,int ) ;} ;
struct TYPE_3__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cyapa*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cyapa *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->input;

 if (!VAR_4 || !VAR_4->users) {
  if (VAR_3->gen >= VAR_0)
   FUNC_0(VAR_3->client->irq);
  if (!VAR_4 || VAR_3->operational)
   VAR_3->ops->set_power_mode(VAR_3,
     VAR_2, 0, VAR_1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_bay_info {int timer; int index; int state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* power ) (struct media_bay_info*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct media_bay_info*,int) ;
 int FUNC_3 (struct media_bay_info*,int) ;

__attribute__((used)) static inline void FUNC_4(struct media_bay_info* VAR_3, int VAR_4)
{

 if (VAR_4) {
  VAR_3->ops->power(VAR_3, 1);
  VAR_3->state = VAR_2;
  FUNC_1("mediabay%d: powering up\n", VAR_3->index);
 } else {

  VAR_3->ops->power(VAR_3, 0);
  VAR_3->state = VAR_1;
  FUNC_1("mediabay%d: powering down\n", VAR_3->index);
 }
 VAR_3->timer = FUNC_0(VAR_0);
}

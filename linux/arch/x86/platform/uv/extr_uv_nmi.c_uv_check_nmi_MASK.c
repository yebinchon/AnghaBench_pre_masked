
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uv_hub_nmi_s {int nmi_lock; int in_nmi; } ;
struct TYPE_2__ {int queries; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int,struct uv_hub_nmi_s*) ;
 int FUNC_9 (struct uv_hub_nmi_s*) ;

__attribute__((used)) static int FUNC_10(struct uv_hub_nmi_s *VAR_5)
{
 int VAR_6 = FUNC_5();
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_2(&VAR_2);
 FUNC_6(VAR_0.queries);

 do {
  VAR_7 = FUNC_0(&VAR_5->in_nmi);
  if (VAR_7)
   break;

  if (FUNC_3(&VAR_5->nmi_lock)) {
   VAR_8 = FUNC_9(VAR_5);


   if (VAR_8 > 0) {
    FUNC_8(VAR_6, VAR_5);
    VAR_7 = 1;
    break;
   }


   else if (VAR_8 < 0)
    goto slave_wait;


   FUNC_4(&VAR_5->nmi_lock);

  } else {


slave_wait: FUNC_1();
   FUNC_7(VAR_4);


   VAR_7 = FUNC_0(&VAR_5->in_nmi);
   if (VAR_7)
    break;
  }





  if (!VAR_7) {
   VAR_7 = FUNC_0(&VAR_1);
   if (VAR_7)
    FUNC_8(VAR_6, VAR_5);
  }


  if (VAR_8 < 0)
   FUNC_4(&VAR_5->nmi_lock);

 } while (0);

 if (!VAR_7)
  FUNC_2(&VAR_3);

 return VAR_7;
}

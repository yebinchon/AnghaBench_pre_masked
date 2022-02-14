
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int kref; } ;
struct chtls_dev {TYPE_1__ tlsdev; int list; } ;
typedef enum cxgb4_state { ____Placeholder_cxgb4_state } cxgb4_state ;






 int VAR_0 ;
 int FUNC_0 (struct chtls_dev*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, enum cxgb4_state VAR_2)
{
 struct chtls_dev *VAR_3 = VAR_1;

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_3);
  break;
 case 130:
  break;
 case 129:
  break;
 case 131:
  FUNC_3(&VAR_0);
  FUNC_2(&VAR_3->list);
  FUNC_4(&VAR_0);
  FUNC_1(&VAR_3->tlsdev.kref, VAR_3->tlsdev.release);
  break;
 default:
  break;
 }
 return 0;
}

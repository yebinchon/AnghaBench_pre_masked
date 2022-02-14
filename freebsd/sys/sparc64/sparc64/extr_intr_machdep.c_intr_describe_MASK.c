
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intr_vector {TYPE_1__* iv_event; } ;
struct TYPE_2__ {int ie_fullname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,void*,char const*) ;
 int VAR_2 ;
 struct intr_vector* VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(int VAR_4, void *VAR_5, const char *VAR_6)
{
 struct intr_vector *VAR_7;
 int VAR_8;

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return (VAR_0);
 FUNC_2(&VAR_2);
 VAR_7 = &VAR_3[VAR_4];
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_2);
  return (VAR_0);
 }
 VAR_8 = FUNC_0(VAR_7->iv_event, VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_3(&VAR_2);
  return (VAR_8);
 }
 FUNC_1(VAR_4, VAR_7->iv_event->ie_fullname, 0);
 FUNC_3(&VAR_2);
 return (VAR_8);
}

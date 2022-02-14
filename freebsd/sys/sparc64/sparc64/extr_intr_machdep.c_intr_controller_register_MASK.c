
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_vector {int iv_mid; struct intr_event* iv_event; void* iv_icarg; struct intr_controller const* iv_ic; } ;
struct intr_event {int dummy; } ;
struct intr_controller {int ic_clear; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct intr_event**,struct intr_vector*,int ,int,int *,int ,int ,int ,char*,int) ;
 int FUNC_2 (struct intr_event*) ;
 int VAR_4 ;
 struct intr_vector* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(int VAR_7, const struct intr_controller *VAR_8,
    void *VAR_9)
{
 struct intr_event *VAR_10;
 struct intr_vector *VAR_11;
 int VAR_12;

 if (VAR_7 < 0 || VAR_7 >= VAR_2)
  return (VAR_1);
 FUNC_3(&VAR_4);
 VAR_11 = &VAR_5[VAR_7];
 VAR_10 = VAR_11->iv_event;
 FUNC_4(&VAR_4);
 if (VAR_10 != ((void*)0))
  return (VAR_0);
 VAR_12 = FUNC_1(&VAR_10, VAR_11, 0, VAR_7, ((void*)0), VAR_8->ic_clear,
     VAR_8->ic_clear, VAR_3, "vec%d:", VAR_7);
 if (VAR_12 != 0)
  return (VAR_12);
 FUNC_3(&VAR_4);
 if (VAR_11->iv_event != ((void*)0)) {
  FUNC_4(&VAR_4);
  FUNC_2(VAR_10);
  return (VAR_0);
 }
 VAR_11->iv_ic = VAR_8;
 VAR_11->iv_icarg = VAR_9;
 VAR_11->iv_event = VAR_10;
 VAR_11->iv_mid = FUNC_0(VAR_6);
 FUNC_4(&VAR_4);
 return (0);
}

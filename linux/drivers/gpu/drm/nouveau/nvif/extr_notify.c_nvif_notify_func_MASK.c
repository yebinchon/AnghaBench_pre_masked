
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvif_notify {int (* func ) (struct nvif_notify*) ;int putcnt; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvif_notify*) ;
 int FUNC_2 (struct nvif_notify*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_4(struct nvif_notify *VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_2->func(VAR_2);
 if (VAR_4 == VAR_0 ||
     !FUNC_3(VAR_1, &VAR_2->flags)) {
  if (!VAR_3)
   FUNC_0(&VAR_2->putcnt);
  else
   FUNC_1(VAR_2);
 }
 return VAR_4;
}

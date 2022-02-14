
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct dmar_unit {int barrier_flags; int unit; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*,int *,int ,char*,int ) ;

bool
FUNC_4(struct dmar_unit *VAR_4, u_int VAR_5)
{
 VAR_0;

 FUNC_0(VAR_4);
 if ((VAR_4->barrier_flags & VAR_1) != 0) {
  FUNC_1(VAR_4);
  return (0);
 }

 if ((VAR_4->barrier_flags & VAR_2) != 0) {
  while ((VAR_4->barrier_flags & VAR_2) != 0) {
   VAR_4->barrier_flags |= VAR_3;
   FUNC_3(&VAR_4->barrier_flags, &VAR_4->lock, 0,
       "dmarb", 0);
  }
  FUNC_2((VAR_4->barrier_flags & VAR_1) != 0,
      ("dmar%d barrier %d missing done", VAR_4->unit, VAR_5));
  FUNC_1(VAR_4);
  return (0);
 }

 VAR_4->barrier_flags |= VAR_2;
 FUNC_1(VAR_4);
 return (1);
}

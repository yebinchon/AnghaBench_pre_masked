
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dmar_unit {int dummy; } ;
struct dmar_ctx {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct dmar_unit*,struct dmar_ctx*) ;
 struct dmar_ctx* FUNC_4 (struct dmar_unit*,int ,int ,int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

struct dmar_ctx *
FUNC_10(struct dmar_unit *VAR_1, device_t VAR_2, bool VAR_3)
{
 device_t VAR_4;
 struct dmar_ctx *VAR_5;
 bool VAR_6;
 uint16_t VAR_7;

 VAR_4 = FUNC_5(VAR_2, &VAR_7);
 VAR_6 = FUNC_2(FUNC_7(VAR_4),
     FUNC_6(VAR_4), FUNC_9(VAR_4),
     FUNC_8(VAR_4));
 VAR_5 = FUNC_4(VAR_1, VAR_4, VAR_7, VAR_6, VAR_3);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 if (VAR_6) {




  FUNC_0(VAR_1);
  if ((VAR_5->flags & VAR_0) == 0) {
   VAR_5->flags |= VAR_0;
   FUNC_1(VAR_1);
  } else {
   FUNC_3(VAR_1, VAR_5);
  }
  VAR_5 = ((void*)0);
 }
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct rxe_dev {int tfm; } ;
struct TYPE_5__ {int tfm; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (TYPE_1__*,void*,size_t) ;
 int FUNC_4 (char*,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline u32 FUNC_7(struct rxe_dev *VAR_1,
       u32 VAR_2, void *VAR_3, size_t VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 FUNC_0(VAR_0, VAR_1->tfm);

 VAR_0->tfm = VAR_1->tfm;
 *(u32 *)FUNC_5(VAR_0) = VAR_2;
 VAR_6 = FUNC_3(VAR_0, VAR_3, VAR_4);
 if (FUNC_6(VAR_6)) {
  FUNC_4("failed crc calculation, err: %d\n", VAR_6);
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 }

 VAR_5 = *(u32 *)FUNC_5(VAR_0);
 FUNC_1(FUNC_5(VAR_0));
 return VAR_5;
}

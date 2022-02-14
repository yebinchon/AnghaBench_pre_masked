
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct abituguru_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct abituguru_data*) ;
 int FUNC_2 (struct abituguru_data*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct abituguru_data*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct abituguru_data *VAR_2,
 u8 VAR_3, u8 VAR_4, u8 *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7);
 if (VAR_8)
  return VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if (FUNC_3(VAR_2, VAR_1)) {
   FUNC_0(VAR_7 ? 1 : 3,
    "timeout exceeded waiting for "
    "read state (bank: %d, sensor: %d)\n",
    (int)VAR_3, (int)VAR_4);
   break;
  }
  VAR_5[VAR_8] = FUNC_4(VAR_2->addr + VAR_0);
 }


 FUNC_1(VAR_2);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(u32 *VAR_4)
{
 u32 VAR_5[VAR_1];
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;


 if (VAR_3 > 0) {
  *VAR_4 = VAR_3;
  return 0;
 }
 VAR_6 = FUNC_0(VAR_2, 0, 0, 0, 0, VAR_5);
 *VAR_4 = VAR_5[1];

 return VAR_6;
}

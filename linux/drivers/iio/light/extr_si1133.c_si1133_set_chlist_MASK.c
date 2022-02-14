
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct si1133_data {scalar_t__ scan_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct si1133_data*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct si1133_data *VAR_1, u8 VAR_2)
{

 if (VAR_1->scan_mask == VAR_2)
  return 0;

 VAR_1->scan_mask = VAR_2;

 return FUNC_0(VAR_1, VAR_0, VAR_2);
}

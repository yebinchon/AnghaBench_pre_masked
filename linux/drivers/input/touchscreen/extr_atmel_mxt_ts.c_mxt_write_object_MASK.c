
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mxt_object {scalar_t__ start_address; } ;
struct mxt_data {int client; } ;


 int VAR_0 ;
 struct mxt_object* FUNC_0 (struct mxt_data*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mxt_object*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mxt_data *VAR_1,
     u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct mxt_object *VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5 || VAR_3 >= FUNC_1(VAR_5))
  return -VAR_0;

 VAR_6 = VAR_5->start_address;
 return FUNC_2(VAR_1->client, VAR_6 + VAR_3, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gb_host_device {int dev; } ;
struct gb_connection {int dummy; } ;


 int FUNC_0 (int *,char*,size_t) ;
 struct gb_connection* FUNC_1 (struct gb_host_device*,int ) ;
 int FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_connection*,int *,size_t) ;
 int FUNC_4 (struct gb_host_device*) ;

void FUNC_5(struct gb_host_device *VAR_0, u16 VAR_1,
         u8 *VAR_2, size_t VAR_3)
{
 struct gb_connection *VAR_4;

 FUNC_4(VAR_0);

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_4) {
  FUNC_0(&VAR_0->dev,
   "nonexistent connection (%zu bytes dropped)\n", VAR_3);
  return;
 }
 FUNC_3(VAR_4, VAR_2, VAR_3);
 FUNC_2(VAR_4);
}

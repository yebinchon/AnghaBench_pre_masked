
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubx_data {int vcc; } ;
struct gnss_serial {int dummy; } ;


 struct ubx_data* FUNC_0 (struct gnss_serial*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gnss_serial *VAR_0)
{
 struct ubx_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->vcc);
 if (VAR_2)
  return VAR_2;

 return 0;
}

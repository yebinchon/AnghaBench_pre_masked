
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ec_response_get_next_data {int switches; } ;
struct cros_ec_keyb {struct cros_ec_device* ec; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cros_ec_device*,int ,int ,union ec_response_get_next_data*,int) ;
 int FUNC_1 (struct cros_ec_keyb*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct cros_ec_keyb *VAR_3)
{
 struct cros_ec_device *VAR_4 = VAR_3->ec;
 union ec_response_get_next_data VAR_5 = {};
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1,
    VAR_0, &VAR_5,
    sizeof(VAR_5.switches));
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_3, VAR_2,
          FUNC_2(&VAR_5.switches));

 return 0;
}

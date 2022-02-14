
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxj_data {int standard; } ;
struct drx_demod_instance {int my_i2c_dev_addr; scalar_t__ my_ext_attr; } ;
typedef enum drx_standard { ____Placeholder_drx_standard } drx_standard ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct drx_demod_instance*,int) ;
 int FUNC_2 (struct drx_demod_instance*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct drx_demod_instance*) ;

__attribute__((used)) static int
FUNC_5(struct drx_demod_instance *VAR_2, enum drx_standard *VAR_3)
{
 struct drxj_data *VAR_4 = ((void*)0);
 int VAR_5;
 enum drx_standard VAR_6;


 if ((VAR_3 == ((void*)0)) || (VAR_2 == ((void*)0)))
  return -VAR_0;

 VAR_4 = (struct drxj_data *) VAR_2->my_ext_attr;
 VAR_6 = VAR_4->standard;




 switch (VAR_6) {

 case 131:
 case 130:
 case 129:
  VAR_5 = FUNC_1(VAR_2, 0);
  if (VAR_5 != 0) {
   FUNC_3("error %d\n", VAR_5);
   goto rw_error;
  }
  break;

 case 133:
  VAR_5 = FUNC_2(VAR_2, 0);
  if (VAR_5 != 0) {
   FUNC_3("error %d\n", VAR_5);
   goto rw_error;
  }
  break;
 case 128:

  break;
 case 132:
 default:
  return -VAR_0;
 }





 VAR_4->standard = *VAR_3;

 switch (*VAR_3) {

 case 131:
 case 130:
 case 129:
  do {
   u16 VAR_7;
   VAR_5 = FUNC_0(VAR_2->my_i2c_dev_addr, VAR_1, &VAR_7, 0);
   if (VAR_5 != 0) {
    FUNC_3("error %d\n", VAR_5);
    goto rw_error;
   }
  } while (0);
  break;

 case 133:
  VAR_5 = FUNC_4(VAR_2);
  if (VAR_5 != 0) {
   FUNC_3("error %d\n", VAR_5);
   goto rw_error;
  }
  break;
 default:
  VAR_4->standard = 128;
  return -VAR_0;
  break;
 }

 return 0;
rw_error:

 VAR_4->standard = 128;
 return VAR_5;
}

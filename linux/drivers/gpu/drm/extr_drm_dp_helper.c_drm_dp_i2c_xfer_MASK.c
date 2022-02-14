
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {unsigned int len; int * buf; int addr; } ;
struct i2c_adapter {struct drm_dp_aux* algo_data; } ;
struct drm_dp_aux_msg {scalar_t__ size; int * buffer; int request; int address; } ;
struct drm_dp_aux {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int,int ) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct drm_dp_aux*,struct drm_dp_aux_msg*) ;
 int FUNC_2 (struct drm_dp_aux*,struct drm_dp_aux_msg*) ;
 int FUNC_3 (struct drm_dp_aux_msg*,struct i2c_msg*) ;
 int FUNC_4 (struct drm_dp_aux_msg*,int ,int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_3, struct i2c_msg *VAR_4,
      int VAR_5)
{
 struct drm_dp_aux *VAR_6 = VAR_3->algo_data;
 unsigned int VAR_7, VAR_8;
 unsigned VAR_9;
 struct drm_dp_aux_msg VAR_10;
 int VAR_11 = 0;

 VAR_2 = FUNC_0(VAR_2, 1, VAR_1);

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_10.address = VAR_4[VAR_7].addr;
  FUNC_3(&VAR_10, &VAR_4[VAR_7]);




  VAR_10.buffer = ((void*)0);
  VAR_10.size = 0;
  VAR_11 = FUNC_1(VAR_6, &VAR_10);





  FUNC_3(&VAR_10, &VAR_4[VAR_7]);

  if (VAR_11 < 0)
   break;




  VAR_9 = VAR_2;
  for (VAR_8 = 0; VAR_8 < VAR_4[VAR_7].len; VAR_8 += VAR_10.size) {
   VAR_10.buffer = VAR_4[VAR_7].buf + VAR_8;
   VAR_10.size = FUNC_5(VAR_9, VAR_4[VAR_7].len - VAR_8);

   VAR_11 = FUNC_2(VAR_6, &VAR_10);





   FUNC_3(&VAR_10, &VAR_4[VAR_7]);

   if (VAR_11 < 0)
    break;
   VAR_9 = VAR_11;
  }
  if (VAR_11 < 0)
   break;
 }
 if (VAR_11 >= 0)
  VAR_11 = VAR_5;




 VAR_10.request &= ~VAR_0;
 VAR_10.buffer = ((void*)0);
 VAR_10.size = 0;
 (void)FUNC_1(VAR_6, &VAR_10);

 return VAR_11;
}

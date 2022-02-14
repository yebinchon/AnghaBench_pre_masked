
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {struct wf_lm87_sensor* priv; } ;
struct wf_lm87_sensor {int * i2c; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct wf_sensor *VAR_2, s32 *VAR_3)
{
 struct wf_lm87_sensor *VAR_4 = VAR_2->priv;
 s32 VAR_5;

 if (VAR_4->i2c == ((void*)0))
  return -VAR_0;




 VAR_5 = FUNC_0(VAR_4->i2c, 0x27);
 if (VAR_5 < 0)
  return VAR_5;
 *VAR_3 = VAR_5 << 16;

 return 0;
}

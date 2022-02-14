
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ftm_quaddec {int dummy; } ;
struct counter_device {struct ftm_quaddec* priv; } ;
struct counter_count {int dummy; } ;


 size_t FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ftm_quaddec*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct counter_device *VAR_2,
         struct counter_count *VAR_3,
         size_t *VAR_4)
{
 struct ftm_quaddec *VAR_5 = VAR_2->priv;
 uint32_t VAR_6;

 FUNC_1(VAR_5, VAR_0, &VAR_6);

 *VAR_4 = FUNC_0(VAR_1, VAR_6);

 return 0;
}

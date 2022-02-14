
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftm_quaddec {int ftm_quaddec_mutex; } ;
struct counter_device {struct ftm_quaddec* priv; } ;
struct counter_count {int dummy; } ;


 int FUNC_0 (struct ftm_quaddec*,int ,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ftm_quaddec*) ;
 int FUNC_2 (struct ftm_quaddec*) ;
 int FUNC_3 (struct ftm_quaddec*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct counter_device *VAR_2,
         struct counter_count *VAR_3,
         size_t VAR_4)
{
 struct ftm_quaddec *VAR_5 = VAR_2->priv;

 FUNC_4(&VAR_5->ftm_quaddec_mutex);

 FUNC_1(VAR_5);
 FUNC_0(VAR_5, VAR_0, VAR_1, VAR_4);
 FUNC_3(VAR_5);


 FUNC_2(VAR_5);

 FUNC_5(&VAR_5->ftm_quaddec_mutex);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_source_device {int link; } ;
struct stm_device {int link_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct stm_source_device*,struct stm_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct stm_device* FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct stm_source_device *VAR_2)
{
 struct stm_device *VAR_3;
 int VAR_4, VAR_5;

retry:
 VAR_4 = FUNC_4(&VAR_1);





 VAR_3 = FUNC_3(VAR_2->link, &VAR_1);

 VAR_5 = 0;
 if (VAR_3) {
  FUNC_1(&VAR_3->link_mutex);
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  FUNC_2(&VAR_3->link_mutex);
 }

 FUNC_5(&VAR_1, VAR_4);


 if (VAR_5 == -VAR_0)
  goto retry;
}

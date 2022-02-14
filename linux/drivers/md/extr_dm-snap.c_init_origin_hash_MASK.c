
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,int,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2, sizeof(struct list_head),
     VAR_1);
 if (!VAR_4) {
  FUNC_0("unable to allocate memory for _origins");
  return -VAR_0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_1(VAR_4 + VAR_6);

 VAR_3 = FUNC_4(VAR_2,
        sizeof(struct list_head),
        VAR_1);
 if (!VAR_3) {
  FUNC_0("unable to allocate memory for _dm_origins");
  FUNC_3(VAR_4);
  return -VAR_0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_1(VAR_3 + VAR_6);

 FUNC_2(&VAR_5);

 return 0;
}

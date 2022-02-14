
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_open_data {scalar_t__ errors; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sa_open_data*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static struct sa_open_data *FUNC_3(void)
{
 struct sa_open_data *VAR_1 = ((void*)0);

 VAR_1 = (struct sa_open_data *)FUNC_1(sizeof(*VAR_1));
 if (!VAR_1) {
  FUNC_0(VAR_0, "salist: cannot allocate sa_open_data.\n");
  return ((void*)0);
 }
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->errors = 0;

 return VAR_1;
}

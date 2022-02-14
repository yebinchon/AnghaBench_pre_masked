
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cn_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_4(void)
{
 int VAR_8;
 void *VAR_9;

 FUNC_0(&VAR_6);

 VAR_9 = FUNC_3(VAR_0, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_4 = VAR_9;
 VAR_5 = VAR_9 + sizeof(struct cn_msg);

 VAR_8 = FUNC_1(&VAR_7, "dmlogusr", VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_4);
  return VAR_8;
 }

 return 0;
}

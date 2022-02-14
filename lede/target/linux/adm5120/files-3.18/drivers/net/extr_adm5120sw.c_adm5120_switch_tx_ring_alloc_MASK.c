
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_8;

 VAR_5 = FUNC_0(((void*)0), VAR_3, &VAR_6,
     VAR_1);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err;
 }

 return 0;

err:
 return VAR_8;
}

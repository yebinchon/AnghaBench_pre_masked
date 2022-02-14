
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 struct sk_buff** FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff** VAR_10 ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_11;
 int VAR_12;


 VAR_8 = FUNC_1(((void*)0), VAR_3, &VAR_9,
     VAR_1);
 if (!VAR_8) {
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_10 = FUNC_2(VAR_5, VAR_2);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto err;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  struct sk_buff *VAR_13;
  VAR_13 = FUNC_0(VAR_6, VAR_1);
  if (!VAR_13) {
   VAR_11 = -VAR_0;
   goto err;
  }
  VAR_10[VAR_12] = VAR_13;
  FUNC_3(VAR_13, VAR_7);
 }

 return 0;

err:
 return VAR_11;
}

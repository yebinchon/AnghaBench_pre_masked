
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct crypto_report_comp {int type; } ;
struct crypto_alg {int dummy; } ;
typedef int rcomp ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_report_comp*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ,int,struct crypto_report_comp*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct crypto_alg *VAR_2)
{
 struct crypto_report_comp VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 FUNC_2(VAR_3.type, "compression", sizeof(VAR_3.type));

 return FUNC_1(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}

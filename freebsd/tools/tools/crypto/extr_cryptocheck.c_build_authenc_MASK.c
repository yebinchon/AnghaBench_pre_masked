
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg {scalar_t__ type; char* name; int evp_md; int evp_cipher; int mac; int cipher; } ;
typedef int authenc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct alg*,int ,int) ;

__attribute__((used)) static struct alg *
FUNC_3(struct alg *VAR_3, struct alg *VAR_4)
{
 static struct alg VAR_5;
 char *VAR_6;

 FUNC_1(VAR_3->type == VAR_1);
 FUNC_1(VAR_4->type == VAR_2);
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(&VAR_6, "%s+%s", VAR_3->name, VAR_4->name);
 VAR_5.name = VAR_6;
 VAR_5.cipher = VAR_3->cipher;
 VAR_5.mac = VAR_4->mac;
 VAR_5.type = VAR_0;
 VAR_5.evp_cipher = VAR_3->evp_cipher;
 VAR_5.evp_md = VAR_4->evp_md;
 return (&VAR_5);
}

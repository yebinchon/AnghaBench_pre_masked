
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_entry {scalar_t__ key; int ent; } ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (scalar_t__,char*,size_t) ;
 int FUNC_2 (int,size_t,size_t,int) ;
 size_t FUNC_3 (char*) ;
 struct test_entry* FUNC_4 (int ) ;

__attribute__((used)) static struct test_entry *FUNC_5(unsigned int VAR_0,
        char *VAR_1, char *VAR_2)
{
 size_t VAR_3 = FUNC_3(VAR_1);
 size_t VAR_4 = FUNC_3(VAR_2);
 struct test_entry *VAR_5 = FUNC_4(FUNC_2(sizeof(*VAR_5), VAR_3, VAR_4, 2));
 FUNC_0(&VAR_5->ent, VAR_0);
 FUNC_1(VAR_5->key, VAR_1, VAR_3 + 1);
 FUNC_1(VAR_5->key + VAR_3 + 1, VAR_2, VAR_4 + 1);
 return VAR_5;
}

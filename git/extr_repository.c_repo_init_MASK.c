
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository_format {int hash_algo; } ;
struct repository {int commondir; int parsed_objects; int objects; } ;


 struct repository_format VAR_0 ;
 int FUNC_0 (struct repository_format*) ;
 int FUNC_1 (struct repository*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct repository_format*,int ) ;
 int FUNC_5 (struct repository*) ;
 scalar_t__ FUNC_6 (struct repository*,char const*) ;
 int FUNC_7 (struct repository*,int ) ;
 int FUNC_8 (struct repository*,char const*) ;

int FUNC_9(struct repository *VAR_1,
       const char *VAR_2,
       const char *VAR_3)
{
 struct repository_format VAR_4 = VAR_0;
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->objects = FUNC_3();
 VAR_1->parsed_objects = FUNC_2();

 if (FUNC_6(VAR_1, VAR_2))
  goto error;

 if (FUNC_4(&VAR_4, VAR_1->commondir))
  goto error;

 FUNC_7(VAR_1, VAR_4.hash_algo);

 if (VAR_3)
  FUNC_8(VAR_1, VAR_3);

 FUNC_0(&VAR_4);
 return 0;

error:
 FUNC_5(VAR_1);
 return -1;
}

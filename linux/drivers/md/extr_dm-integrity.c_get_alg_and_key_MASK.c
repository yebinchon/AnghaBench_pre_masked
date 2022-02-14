
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg_spec {char const* alg_string; char* key_string; int key_size; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alg_spec*) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int ) ;
 char const* FUNC_3 (char*,int ) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, struct alg_spec *VAR_4, char **VAR_5, char *VAR_6)
{
 char *VAR_7;

 FUNC_0(VAR_4);

 VAR_4->alg_string = FUNC_3(FUNC_4(VAR_3, ':') + 1, VAR_2);
 if (!VAR_4->alg_string)
  goto nomem;

 VAR_7 = FUNC_4(VAR_4->alg_string, ':');
 if (VAR_7) {
  *VAR_7 = 0;
  VAR_4->key_string = VAR_7 + 1;
  if (FUNC_5(VAR_4->key_string) & 1)
   goto inval;

  VAR_4->key_size = FUNC_5(VAR_4->key_string) / 2;
  VAR_4->key = FUNC_2(VAR_4->key_size, VAR_2);
  if (!VAR_4->key)
   goto nomem;
  if (FUNC_1(VAR_4->key, VAR_4->key_string, VAR_4->key_size))
   goto inval;
 }

 return 0;
inval:
 *VAR_5 = VAR_6;
 return -VAR_0;
nomem:
 *VAR_5 = "Out of memory for an argument";
 return -VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; struct property* value; struct property* name; struct property* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct property*) ;
 struct property* FUNC_1 (int const,int ) ;
 struct property* FUNC_2 (char const*,int ) ;
 struct property* FUNC_3 (int,int ) ;
 int FUNC_4 (struct property*,unsigned char const*,int const) ;

__attribute__((used)) static struct property *FUNC_5(const char *VAR_1, const int VAR_2,
         const unsigned char *VAR_3, struct property *VAR_4)
{
 struct property *VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);

 if (!VAR_5)
  return ((void*)0);

 if (!(VAR_5->name = FUNC_2(VAR_1, VAR_0)))
  goto cleanup;
 if (!(VAR_5->value = FUNC_1(VAR_2 + 1, VAR_0)))
  goto cleanup;

 FUNC_4(VAR_5->value, VAR_3, VAR_2);
 *(((char *)VAR_5->value) + VAR_2) = 0;
 VAR_5->length = VAR_2;
 VAR_5->next = VAR_4;
 return VAR_5;

cleanup:
 FUNC_0(VAR_5->name);
 FUNC_0(VAR_5->value);
 FUNC_0(VAR_5);
 return ((void*)0);
}

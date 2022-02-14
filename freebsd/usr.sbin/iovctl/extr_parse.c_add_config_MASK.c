
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int const*,int *) ;
 int FUNC_1 (char const*,int const*,int *) ;
 int FUNC_2 (char const*,int const*,int *,char const*,int ) ;
 int FUNC_3 (char const*,int const*,int *) ;
 int FUNC_4 (int,char*,char const*) ;
 char* FUNC_5 (int const*,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_5, const ucl_object_t *VAR_6, nvlist_t *VAR_7,
    const nvlist_t *VAR_8)
{
 const char *VAR_9;

 VAR_9 = FUNC_5(VAR_8, VAR_0);

 if (FUNC_6(VAR_9, "bool") == 0)
  FUNC_0(VAR_5, VAR_6, VAR_7);
 else if (FUNC_6(VAR_9, "string") == 0)
  FUNC_1(VAR_5, VAR_6, VAR_7);
 else if (FUNC_6(VAR_9, "uint8_t") == 0)
  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_9, VAR_4);
 else if (FUNC_6(VAR_9, "uint16_t") == 0)
  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_9, VAR_1);
 else if (FUNC_6(VAR_9, "uint32_t") == 0)
  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_9, VAR_2);
 else if (FUNC_6(VAR_9, "uint64_t") == 0)
  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_9, VAR_3);
 else if (FUNC_6(VAR_9, "unicast-mac") == 0)
  FUNC_3(VAR_5, VAR_6, VAR_7);
 else
  FUNC_4(1, "Unexpected type '%s' in schema", VAR_9);
}

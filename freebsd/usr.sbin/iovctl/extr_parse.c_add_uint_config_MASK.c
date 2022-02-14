
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int ucl_object_t ;
typedef int nvlist_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int *,char const*,scalar_t__) ;
 int FUNC_1 (char const*,int const*,char const*) ;
 int FUNC_2 (int const*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const ucl_object_t *VAR_1, nvlist_t *VAR_2,
    const char *VAR_3, uint64_t VAR_4)
{
 int64_t VAR_5;
 uint64_t VAR_6;


 if (!FUNC_2(VAR_1, &VAR_5))
  FUNC_1(VAR_0, VAR_1, VAR_3);

 if (VAR_5 < 0)
  FUNC_1(VAR_0, VAR_1, VAR_3);

 VAR_6 = VAR_5;
 if (VAR_6 > VAR_4)
  FUNC_1(VAR_0, VAR_1, VAR_3);

 FUNC_0(VAR_2, VAR_0, VAR_6);
}

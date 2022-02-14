
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patch {scalar_t__* new_oid_prefix; scalar_t__* old_oid_prefix; } ;
struct gitdiff_data {int dummy; } ;
struct TYPE_2__ {unsigned int hexsz; } ;


 int FUNC_0 (struct gitdiff_data*,char const*,struct patch*) ;
 int FUNC_1 (scalar_t__*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (char const*,char) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct gitdiff_data *VAR_1,
    const char *VAR_2,
    struct patch *VAR_3)
{




 const char *VAR_4, *VAR_5;
 int VAR_6;
 const unsigned VAR_7 = VAR_0->hexsz;

 VAR_4 = FUNC_2(VAR_2, '.');
 if (!VAR_4 || VAR_4[1] != '.' || VAR_7 < VAR_4 - VAR_2)
  return 0;
 VAR_6 = VAR_4 - VAR_2;
 FUNC_1(VAR_3->old_oid_prefix, VAR_2, VAR_6);
 VAR_3->old_oid_prefix[VAR_6] = 0;

 VAR_2 = VAR_4 + 2;
 VAR_4 = FUNC_2(VAR_2, ' ');
 VAR_5 = FUNC_3(VAR_2, '\n');

 if (!VAR_4 || VAR_5 < VAR_4)
  VAR_4 = VAR_5;
 VAR_6 = VAR_4 - VAR_2;

 if (VAR_7 < VAR_6)
  return 0;
 FUNC_1(VAR_3->new_oid_prefix, VAR_2, VAR_6);
 VAR_3->new_oid_prefix[VAR_6] = 0;
 if (*VAR_4 == ' ')
  return FUNC_0(VAR_1, VAR_4 + 1, VAR_3);
 return 0;
}

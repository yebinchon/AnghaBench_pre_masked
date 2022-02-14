
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {char* paths; TYPE_1__ patch; } ;
typedef TYPE_2__ patch_generated_with_delta ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
 patch_generated_with_delta **VAR_1,
 const char **VAR_2,
 const char **VAR_3)
{
 patch_generated_with_delta *VAR_4;
 size_t VAR_5 = *VAR_2 ? FUNC_4(*VAR_2) : 0;
 size_t VAR_6 = *VAR_3 ? FUNC_4(*VAR_3) : 0;
 size_t VAR_7;

 FUNC_1(&VAR_7, sizeof(*VAR_4), VAR_5);
 FUNC_1(&VAR_7, VAR_7, VAR_6);
 FUNC_1(&VAR_7, VAR_7, 2);

 *VAR_1 = VAR_4 = FUNC_2(1, VAR_7);
 FUNC_0(VAR_4);

 VAR_4->patch.flags = VAR_0;

 if (*VAR_2) {
  FUNC_3(&VAR_4->paths[0], *VAR_2, VAR_5);
  *VAR_2 = &VAR_4->paths[0];
 } else if (*VAR_3)
  *VAR_2 = &VAR_4->paths[VAR_5 + 1];

 if (*VAR_3) {
  FUNC_3(&VAR_4->paths[VAR_5 + 1], *VAR_3, VAR_6);
  *VAR_3 = &VAR_4->paths[VAR_5 + 1];
 } else if (*VAR_2)
  *VAR_3 = &VAR_4->paths[0];

 return 0;
}

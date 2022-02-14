
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_strx; } ;
struct nlist {int n_type; TYPE_1__ n_un; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static bool
FUNC_1(struct nlist *VAR_7)
{
    char *VAR_8, VAR_9;





    if ( ! ( ( VAR_7 -> n_type == ( VAR_2 | VAR_1 ) )
    || ( ( VAR_7 -> n_type == VAR_2 ) && ( VAR_4 == 0 ) ) ) ) {
 return VAR_0;
    }







    VAR_8 = VAR_5 + VAR_7 -> n_un.n_strx;
    if ( VAR_6 && *VAR_8 != '_' )
 return VAR_0;
    while ( (VAR_9 = *VAR_8++) ) {
 if ( VAR_9 == '.' ) {
     return VAR_0;
 }
    }
    return VAR_3;
}

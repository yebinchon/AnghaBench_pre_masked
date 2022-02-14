
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int browsers_hash_idx; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (char***,int ,char*) ;
 int FUNC_3 (char***,int ,char*,char*) ;
 size_t FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 size_t FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (char ***VAR_1, char *VAR_2, int VAR_3)
{
  char *VAR_4;
  size_t VAR_5 = 0;


  VAR_5 = FUNC_4 (VAR_2, "\t");
  if (FUNC_5 (VAR_2) == VAR_5)
    FUNC_0 ("Malformed browser name at line: %d", VAR_3);

  VAR_2[VAR_5] = '\0';


  VAR_4 = VAR_2 + (VAR_5 + 1);
  VAR_5 = FUNC_6 (VAR_4, "\t");
  if (FUNC_5 (VAR_4) == VAR_5)
    FUNC_0 ("Malformed browser category at line: %d", VAR_3);
  VAR_4 = VAR_4 + VAR_5;
  VAR_4 = FUNC_7 (VAR_4);

  if (FUNC_2 (VAR_1, VAR_0.browsers_hash_idx, VAR_2)) {
    FUNC_1 (("Duplicate browser entry: %s", VAR_2));
    return;
  }

  FUNC_3 (VAR_1, VAR_0.browsers_hash_idx, VAR_2, VAR_4);
  VAR_0.browsers_hash_idx++;
}

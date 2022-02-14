
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int root; } ;
typedef TYPE_1__ transaction_t ;
struct pair_hostid_result {size_t host_id; } ;
struct TYPE_5__ {char* hostname; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pair_hostid_result*,int*,unsigned int,unsigned int) ;
 int FUNC_2 (struct pair_hostid_result*) ;
 struct pair_hostid_result* FUNC_3 (int*,unsigned long long,int ) ;
 TYPE_1__* FUNC_4 (unsigned long long,int,int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int,char*,char*,char*) ;

char *FUNC_10 (unsigned long long VAR_1, int VAR_2, unsigned VAR_3, unsigned VAR_4) {
  transaction_t *VAR_5 = FUNC_4 (VAR_1, VAR_2, 0);
  if (VAR_5 == ((void*)0)) {
    return ((void*)0);
  }
  int VAR_6;
  struct pair_hostid_result *VAR_7 = FUNC_3 (&VAR_6, VAR_1, VAR_5->root);
  if (VAR_7 == ((void*)0)) {
    return ((void*)0);
  }

  FUNC_1 (VAR_7, &VAR_6, VAR_3, VAR_4);

  if (!VAR_6) {
    FUNC_2 (VAR_7);
    return FUNC_7 ("");
  }

  int VAR_8, VAR_9 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
    VAR_9 += FUNC_8 (VAR_0[VAR_7[VAR_8].host_id]->hostname) + 1;
  }

  char *VAR_10 = FUNC_5 (VAR_9), *VAR_11 = VAR_10;
  if (VAR_10 == ((void*)0)) {
    FUNC_2 (VAR_7);
    return ((void*)0);
  }

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
    if (VAR_8 > 0) {
      *VAR_11++= ',';
    }
    FUNC_6 (VAR_11, VAR_0[VAR_7[VAR_8].host_id]->hostname);
    VAR_11 += FUNC_8 (VAR_11);
  }
  FUNC_9 (4, "p = %p, z + l = %p\n", VAR_11, VAR_10 + VAR_9);
  FUNC_0 (VAR_11 == (VAR_10 + VAR_9 - 1));
  FUNC_2 (VAR_7);
  return VAR_10;
}

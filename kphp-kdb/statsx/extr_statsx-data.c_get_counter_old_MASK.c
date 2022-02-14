
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int created_at; struct counter* prev; } ;


 int FUNC_0 (long long,int) ;
 struct counter VAR_0 ;
 int FUNC_1 (struct counter*) ;
 int FUNC_2 (int ,char*,long long,int,int) ;
 struct counter* FUNC_3 (long long,int ) ;
 int FUNC_4 (long long,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct counter *FUNC_5 (long long VAR_3, int VAR_4, int VAR_5) {
  if (VAR_2 >= 3) {
    FUNC_2 (VAR_1, "get_counter_old (%lld, %d, %d)\n", VAR_3, VAR_4, VAR_5);
  }

  if (VAR_5 > 0) {
    if (!FUNC_0 (VAR_3, VAR_4)) { return 0; }

    struct counter *VAR_6 = FUNC_5 (VAR_3, VAR_4, -1);
    if (VAR_6) { return VAR_6;}

  }


  struct counter *VAR_7 = FUNC_3 (VAR_3, 0);
  if (!VAR_7) { return VAR_7;}
  if (VAR_5 >= 0) {
    int VAR_8 = FUNC_4 (VAR_3, 0, VAR_5);
    if (VAR_8 == -1 && !VAR_7) {
      return 0;
    }
    if (VAR_8 == -2) {
      return &VAR_0;
    }
  }
  if (!VAR_4) {
    FUNC_1 (VAR_7);
    return VAR_7;
  }


  while (VAR_7) {
    if (VAR_7->created_at < VAR_4) {



      return 0;
    }
    if (VAR_7->created_at == VAR_4) { break; }
    VAR_7 = VAR_7->prev;
  }





  if (VAR_7) { FUNC_1 (VAR_7); }
  return VAR_7;
}

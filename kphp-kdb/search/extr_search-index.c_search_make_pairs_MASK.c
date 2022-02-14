
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freqs; int word; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char const*,int,int ,TYPE_1__*,int ,int ,long long) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2 (const char *VAR_4, int VAR_5, int VAR_6, long long VAR_7) {
  int VAR_8, VAR_9 = FUNC_0 (VAR_4, VAR_5, VAR_3, VAR_1, VAR_0, VAR_2, VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
    FUNC_1 (VAR_6, VAR_1[VAR_8].word, VAR_1[VAR_8].freqs);
  }
}

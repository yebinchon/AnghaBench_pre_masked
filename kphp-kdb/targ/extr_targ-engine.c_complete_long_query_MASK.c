
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,int,int,int ) ;
 int * VAR_1 ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_2 (struct connection *VAR_9, int VAR_10) {
  VAR_3[VAR_6] = FUNC_0 (VAR_0) - VAR_4[VAR_6];
  VAR_7 += VAR_3[VAR_6];
  VAR_2[VAR_6] = VAR_10;
  if (VAR_8 > 0 || VAR_5) {
    FUNC_1 ("%.6lf %d (%d) %s\n", VAR_3[VAR_6], VAR_9 ? VAR_9->fd : -1, VAR_10, VAR_1[VAR_6]);
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Tmp; } ;
typedef int nb_iterator_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int*,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_2 (int,char*,int,int) ;

int FUNC_3 (struct connection *VAR_8) {
  nb_iterator_t VAR_9;
  VAR_6 = 0;
  VAR_3 = VAR_4 = 0;
  if (!VAR_8->Tmp || FUNC_1 (&VAR_9, VAR_8->Tmp) < 0 || FUNC_0 (&VAR_9, &VAR_5, 4) < 4 || !VAR_5) {
    return VAR_5 = 0;
  }
  if (VAR_5 < 0) {
    int VAR_10 = FUNC_0 (&VAR_9, VAR_2, VAR_0 * 4);
    if (VAR_10 < 0 || (VAR_10 & 3) || VAR_10 == VAR_0 * 4) {
      return VAR_5 = 0;
    }
    VAR_3 = (VAR_10 >> 2);
    VAR_4 = VAR_5;
    FUNC_2 (2, "restoring %d words of temp userlist data with tag %d\n", VAR_3, VAR_5);
    return VAR_5 = 0;
  }
  int VAR_11 = FUNC_0 (&VAR_9, VAR_7, VAR_1 - 1);
  if (VAR_11 <= 0 || VAR_11 >= VAR_1 - 1) {
    return VAR_5 = 0;
  }
  VAR_7[VAR_11] = 0;
  VAR_6 = VAR_11;
  FUNC_2 (2, "restoring %d bytes of temp data with tag %d\n", VAR_11, VAR_5);
  return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int listree_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int**,int ) ;
 int FUNC_7 (int**,int ) ;

__attribute__((used)) static inline int FUNC_8 (listree_t *VAR_7, int VAR_8) {
  int VAR_9 = VAR_6, *VAR_10 = VAR_5;
  FUNC_1 (VAR_5 < VAR_4 + VAR_0);
  FUNC_6 (&VAR_10, FUNC_0 (VAR_2, VAR_8));
  if (VAR_9 & 64) {
    *VAR_10++ = FUNC_3 (VAR_8);
  }
  if (VAR_9 & 128) {
    *VAR_10++ = FUNC_2 (VAR_8);
  }
  if (VAR_9 & 256) {
    *VAR_10++ = VAR_1[VAR_8];
  }
  if (VAR_9 & 512) {
    FUNC_7 (&VAR_10, FUNC_5 (VAR_8));
  }
  if (VAR_9 & 1024) {

    int VAR_11;

    *((char **)VAR_10) = FUNC_4 (VAR_8, &VAR_11);

    VAR_10 += VAR_3;
    *VAR_10++ = VAR_11;
  }
  VAR_5 = VAR_10;
  return 0;
}

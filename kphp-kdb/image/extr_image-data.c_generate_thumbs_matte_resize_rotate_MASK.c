
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct forth_stack {int thread_id; } ;
struct TYPE_10__ {int columns; int rows; scalar_t__ colorspace; scalar_t__ matte; } ;
typedef TYPE_1__ Image ;
typedef int FilterTypes ;


 int FUNC_0 (TYPE_1__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (struct forth_stack*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct forth_stack*,TYPE_1__*,int,int,int,int ) ;
 TYPE_1__* FUNC_3 (struct forth_stack*,TYPE_1__*,int) ;
 int FUNC_4 (int,char*,int ) ;

__attribute__((used)) static void *FUNC_5 (struct forth_stack *VAR_3, Image **VAR_4, int VAR_5, int *VAR_6, int *VAR_7, int VAR_8, int VAR_9, FilterTypes VAR_10, int *VAR_11) {
  if (VAR_11) {
    *VAR_11 = 0;
  }
  Image *VAR_12 = *VAR_4, *VAR_13;
  *VAR_6 = VAR_12->columns;
  *VAR_7 = VAR_12->rows;

  if ((VAR_5 % 2) != 0) {
    int VAR_14 = *VAR_6; *VAR_6 = *VAR_7; *VAR_7 = VAR_14;
  }


  if (*VAR_6 > VAR_8 || *VAR_7 > VAR_9) {
    if (VAR_11) {
      (*VAR_11) |= 1;
    }
    VAR_13 = FUNC_2 (VAR_3, VAR_12, VAR_8, VAR_9, 1, VAR_10);
    if (VAR_13 == ((void*)0)) {
      FUNC_0 (VAR_12);
      return VAR_0;
    }
    FUNC_0 (VAR_12);
    VAR_12 = VAR_13;
  }

  FUNC_4 (3, "[%d] after gm_resize_image\n", VAR_3->thread_id);
  VAR_5 %= 4;
  if (VAR_5 < 0) {
    VAR_5 += 4;
  }
  if (VAR_5) {
    if (VAR_11) {
      (*VAR_11) |= 2;
    }
    VAR_13 = FUNC_3 (VAR_3, VAR_12, 90 * VAR_5);
    if (VAR_13 == ((void*)0)) {
      FUNC_0 (VAR_12);
      return VAR_0;
    }
    FUNC_0 (VAR_12);
    VAR_12 = VAR_13;
  }

  FUNC_4 (3, "[%d] after gm_rotate_image\n", VAR_3->thread_id);

  if (VAR_12->matte || VAR_12->colorspace != VAR_2) {
    if (VAR_11) {
      (*VAR_11) |= 4;
    }
    VAR_13 = FUNC_1 (VAR_3, VAR_12);
    if (VAR_13 == ((void*)0)) {
      FUNC_0 (VAR_12);
      return VAR_0;
    }
    FUNC_0 (VAR_12);
    VAR_12 = VAR_13;
  }

  *VAR_6 = VAR_12->columns;
  *VAR_7 = VAR_12->rows;
  *VAR_4 = VAR_12;
  return VAR_1;
}

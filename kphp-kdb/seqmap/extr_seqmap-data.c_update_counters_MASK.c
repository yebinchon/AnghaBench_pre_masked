
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct item {int size; int delta; int plus_unsure; int minus_unsure; TYPE_2__* right; TYPE_1__* left; } ;
struct TYPE_4__ {scalar_t__ plus_unsure; scalar_t__ minus_unsure; scalar_t__ delta; scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ plus_unsure; scalar_t__ minus_unsure; scalar_t__ delta; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct item*) ;
 int VAR_2 ;
 int FUNC_1 (struct item*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

void FUNC_3 (struct item *VAR_5) {
  if (!VAR_5) { return; }
  VAR_5->size = 1;
  int VAR_6 = FUNC_1 (VAR_5);
  int VAR_7 = FUNC_0 (VAR_5);
  if (VAR_6 == VAR_1) {
    VAR_5->delta = 1;
    if (VAR_7 == VAR_3) {
      VAR_5->plus_unsure = 1;
    }
    VAR_5->minus_unsure = 0;
  } else if (VAR_6 == VAR_0) {
    VAR_5->delta = -1;
    if (VAR_7 == VAR_3) {
      VAR_5->minus_unsure = 1;
    }
    VAR_5->plus_unsure = 0;
  } else {
    FUNC_2 (VAR_6 == VAR_4);
    VAR_5->delta = 0;
    FUNC_2 (VAR_7 == VAR_2);
    VAR_5->minus_unsure = 0;
    VAR_5->plus_unsure = 0;
  }
  if (VAR_5->left) {
    VAR_5->size += VAR_5->left->size;
    VAR_5->delta += VAR_5->left->delta;
    VAR_5->minus_unsure += VAR_5->left->minus_unsure;
    VAR_5->plus_unsure += VAR_5->left->plus_unsure;
  }
  if (VAR_5->right) {
    VAR_5->size += VAR_5->right->size;
    VAR_5->delta += VAR_5->right->delta;
    VAR_5->minus_unsure += VAR_5->right->minus_unsure;
    VAR_5->plus_unsure += VAR_5->right->plus_unsure;
  }
}

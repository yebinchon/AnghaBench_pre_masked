
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int level; int num; scalar_t__ text; int mask; TYPE_2__* right; TYPE_1__* left; } ;
struct TYPE_4__ {int num; int level; int extra; int mask; scalar_t__ text; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_3__ {int num; int level; int extra; int mask; scalar_t__ text; scalar_t__ right; scalar_t__ left; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 void* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3 (struct tree* VAR_3) {
  FUNC_0 (!VAR_3->left);
  FUNC_0 (!VAR_3->right);
  FUNC_0 (VAR_3->level < 32);
  if (VAR_2 >= 3) {
    FUNC_1 (VAR_0, "%u.%u.%u.%u\n", VAR_3->num >> 24, (VAR_3->num >> 16) & 0xff, (VAR_3->num >> 8) & 0xff, VAR_3->num & 0xff);
  }

  VAR_3->left = FUNC_2 (sizeof (struct tree));
  VAR_3->left->num = VAR_3->num;
  VAR_3->left->level = VAR_3->level + 1;
  VAR_3->left->left = 0;
  VAR_3->left->right = 0;
  VAR_3->left->extra = 0;
  VAR_3->left->text = VAR_3->text;
  VAR_3->left->extra = (1 << (31 - VAR_3->level));
  VAR_3->left->mask = VAR_3->mask;
  VAR_3->right = FUNC_2 (sizeof (struct tree));
  VAR_3->right->num = VAR_3->num + (1 << (31 - VAR_3->level));
  VAR_3->right->level = VAR_3->level + 1;
  VAR_3->right->left = 0;
  VAR_3->right->right = 0;
  VAR_3->right->extra = 0;
  VAR_3->right->text = VAR_3->text;
  VAR_3->right->extra = (1 << (31 - VAR_3->level));
  VAR_3->right->mask = VAR_3->mask;
  VAR_3->text = 0;
  VAR_1 += 2;
}

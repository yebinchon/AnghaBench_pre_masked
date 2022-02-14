
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t symbol; int weight; struct TYPE_7__* parent; struct TYPE_7__* left; struct TYPE_7__* right; struct TYPE_7__* prev; struct TYPE_7__* next; struct TYPE_7__** head; } ;
typedef TYPE_1__ node_t ;
struct TYPE_8__ {TYPE_1__** loc; TYPE_1__* lhead; TYPE_1__* tree; int blocNode; TYPE_1__* nodeList; } ;
typedef TYPE_2__ huff_t ;
typedef size_t byte ;


 size_t VAR_0 ;
 void* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

void FUNC_2(huff_t* VAR_1, byte VAR_2) {
 node_t *VAR_3, *VAR_4;
 if (VAR_1->loc[VAR_2] == ((void*)0)) {
  VAR_3 = &(VAR_1->nodeList[VAR_1->blocNode++]);
  VAR_4 = &(VAR_1->nodeList[VAR_1->blocNode++]);

  VAR_4->symbol = VAR_0;
  VAR_4->weight = 1;
  VAR_4->next = VAR_1->lhead->next;
  if (VAR_1->lhead->next) {
   VAR_1->lhead->next->prev = VAR_4;
   if (VAR_1->lhead->next->weight == 1) {
    VAR_4->head = VAR_1->lhead->next->head;
   } else {
    VAR_4->head = FUNC_0(VAR_1);
    *VAR_4->head = VAR_4;
   }
  } else {
   VAR_4->head = FUNC_0(VAR_1);
   *VAR_4->head = VAR_4;
  }
  VAR_1->lhead->next = VAR_4;
  VAR_4->prev = VAR_1->lhead;

  VAR_3->symbol = VAR_2;
  VAR_3->weight = 1;
  VAR_3->next = VAR_1->lhead->next;
  if (VAR_1->lhead->next) {
   VAR_1->lhead->next->prev = VAR_3;
   if (VAR_1->lhead->next->weight == 1) {
    VAR_3->head = VAR_1->lhead->next->head;
   } else {

    VAR_3->head = FUNC_0(VAR_1);
    *VAR_3->head = VAR_4;
      }
  } else {

   VAR_3->head = FUNC_0(VAR_1);
   *VAR_3->head = VAR_3;
  }
  VAR_1->lhead->next = VAR_3;
  VAR_3->prev = VAR_1->lhead;
  VAR_3->left = VAR_3->right = ((void*)0);

  if (VAR_1->lhead->parent) {
   if (VAR_1->lhead->parent->left == VAR_1->lhead) {
    VAR_1->lhead->parent->left = VAR_4;
   } else {
    VAR_1->lhead->parent->right = VAR_4;
   }
  } else {
   VAR_1->tree = VAR_4;
  }

  VAR_4->right = VAR_3;
  VAR_4->left = VAR_1->lhead;

  VAR_4->parent = VAR_1->lhead->parent;
  VAR_1->lhead->parent = VAR_3->parent = VAR_4;

  VAR_1->loc[VAR_2] = VAR_3;

  FUNC_1(VAR_1, VAR_4->parent);
 } else {
  FUNC_1(VAR_1, VAR_1->loc[VAR_2]);
 }
}

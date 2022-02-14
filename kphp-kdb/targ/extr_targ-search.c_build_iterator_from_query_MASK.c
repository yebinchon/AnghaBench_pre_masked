
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct union_iterator {void** H; } ;
struct intersection_condition_iterator {void** A; void* Cond; } ;
struct TYPE_12__ {int type; int flags; scalar_t__ value; scalar_t__ value2; int hash; int hash2; struct TYPE_12__* left; struct TYPE_12__* right; struct TYPE_12__* last; } ;
typedef TYPE_1__ query_t ;
typedef void* iterator_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_6 (void*,void*) ;
 void* FUNC_7 (void*,void*) ;
 void* FUNC_8 (void*,void*) ;
 void* FUNC_9 (void*) ;
 void* FUNC_10 (void*,void*) ;
 void* FUNC_11 (TYPE_1__*,int) ;
 void* FUNC_12 (void*) ;
 void* FUNC_13 () ;
 void* FUNC_14 (int ,int ) ;
 void* FUNC_15 (scalar_t__,scalar_t__) ;
 void* FUNC_16 (void*) ;
 void* FUNC_17 (void*) ;
 void* FUNC_18 (void*) ;
 void* FUNC_19 (int) ;
 int FUNC_20 (int) ;
 TYPE_1__* FUNC_21 (int,TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (int) ;
 void* FUNC_24 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

iterator_t FUNC_25 (query_t *VAR_10, int VAR_11) {
  int VAR_12 = VAR_10->type;

  if (FUNC_1 (VAR_10)) {



    return FUNC_12 (FUNC_11 (VAR_10, VAR_11 & 1));
  }

  if (FUNC_2 (VAR_10)) {
    FUNC_5 (!(VAR_10->flags & 1));

    if (VAR_12 == VAR_2 || VAR_12 == VAR_9) {
      query_t *VAR_13 = VAR_10;
      int VAR_14 = 2, VAR_15 = 0, VAR_16 = 0;
      while (VAR_13 != VAR_10->last) {
 VAR_13 = VAR_13->right;
 VAR_14++;
      }
      if (VAR_12 == VAR_9) {

 if (VAR_14 == 2) {
   FUNC_5 (FUNC_2 (VAR_10->left) && FUNC_2 (VAR_10->right));
   return FUNC_8 (FUNC_25 (VAR_10->left, VAR_11), FUNC_25 (VAR_10->right, VAR_11));
 }
 iterator_t VAR_17 = FUNC_24 (VAR_14);
 long VAR_18 = 1;
 for (VAR_13 = VAR_10; VAR_18 < VAR_14; VAR_13 = VAR_13->right, VAR_18++) {
   FUNC_5 (FUNC_2 (VAR_13->left));
   ((struct union_iterator *) VAR_17)->H[VAR_18] = FUNC_25 (VAR_13->left, VAR_11);
 }
 FUNC_5 (FUNC_2 (VAR_13));
 ((struct union_iterator *) VAR_17)->H[VAR_18] = FUNC_25 (VAR_13, VAR_11);
 return FUNC_18 (VAR_17);
      }
      if (VAR_12 == VAR_2) {
 if (FUNC_1 (VAR_13->right)) {
   VAR_15++;
   VAR_14--;
 } else if (FUNC_0 (VAR_13->right)) {
   VAR_16++;
   VAR_14--;
   if (FUNC_1 (VAR_13->left)) {
     VAR_15++;
     VAR_14--;
   }
 }

 FUNC_5 (VAR_14 > 0);
 if (VAR_14 == 1) {
   FUNC_5 (FUNC_2 (VAR_10->left));
   if (VAR_16) {
     FUNC_22 (VAR_10->right);
     iterator_t VAR_19 = FUNC_7 (FUNC_25 (VAR_10->left, VAR_11), FUNC_25 (VAR_10->right, VAR_11));
     FUNC_22 (VAR_10->right);
     return VAR_19;
   }
   FUNC_5 (FUNC_1 (VAR_10->right));
   return FUNC_10 (FUNC_25 (VAR_10->left, VAR_11), FUNC_11 (VAR_10->right, VAR_11 & 1));
 }
 if (VAR_14 == 2 && !VAR_16 && !VAR_15) {
   FUNC_5 (FUNC_2 (VAR_10->left) && FUNC_2 (VAR_10->right));
   return FUNC_6 (FUNC_25 (VAR_10->left, VAR_11), FUNC_25 (VAR_10->right, VAR_11));
 }
 struct intersection_condition_iterator *VAR_20 = (void *) FUNC_23 (VAR_14 + VAR_16);
 long VAR_21 = 0;
 for (VAR_13 = VAR_10; VAR_21 < VAR_14 - 1; VAR_13 = VAR_13->right, VAR_21++) {
   FUNC_5 (FUNC_2 (VAR_13->left));
   VAR_20->A[VAR_21] = FUNC_25 (VAR_13->left, VAR_11);
 }
 if (!VAR_16 && !VAR_15) {
   FUNC_5 (FUNC_2 (VAR_13));
   VAR_20->A[VAR_21] = FUNC_25 (VAR_13, VAR_11);
   return FUNC_16 ((iterator_t) VAR_20);
 }
 FUNC_5 (FUNC_2 (VAR_13->left));
 VAR_20->A[VAR_21] = FUNC_25 (VAR_13->left, VAR_11);
 VAR_13 = VAR_13->right;
 if (!VAR_16) {
   VAR_20->Cond = FUNC_11 (VAR_13, VAR_11 & 1);
   return FUNC_16 ((iterator_t) VAR_20);
 }
 if (VAR_15) {
   FUNC_5 (FUNC_1 (VAR_13->left));
   VAR_20->Cond = FUNC_11 (VAR_13->left, VAR_11 & 1);
   VAR_13 = VAR_13->right;
 }
 FUNC_22 (VAR_13);
 VAR_20->A[VAR_14] = FUNC_25 (VAR_13, VAR_11);
 FUNC_22 (VAR_13);
 return FUNC_17 ((iterator_t) VAR_20);
      }
      FUNC_5 (0);
    }
    if (VAR_12 == VAR_3) {
      return FUNC_13 ();
    }
    if (VAR_12 == VAR_5) {
      return FUNC_14 (VAR_0, VAR_1);
    }
    if (VAR_10->flags & 24) {

      if (VAR_10->type == VAR_4) {
 return FUNC_15 (VAR_10->value, VAR_10->value2);
      }


      if (VAR_10->flags & 16) {
 FUNC_5 (VAR_10->value == VAR_10->value2);
      }
      FUNC_5 (VAR_10->hash);
      return FUNC_19 (VAR_10->hash);
    }
    if (VAR_10->flags & 32) {

      if (VAR_10->type == VAR_6) {
 return FUNC_19 (VAR_10->hash);
      } else if (VAR_10->type == VAR_7) {
 if (!FUNC_20 (VAR_10->hash2)) {
   return FUNC_19 (VAR_10->hash);
 } else if (!FUNC_20 (VAR_10->hash)) {
   return FUNC_19 (VAR_10->hash2);
 }
 return FUNC_8 (FUNC_19 (VAR_10->hash), FUNC_19 (VAR_10->hash2));
      }

      return FUNC_19 (VAR_10->hash2);
    }
    if (VAR_10->flags & 2) {

      if (VAR_10->left->type == VAR_9 && !(VAR_10->left->flags & 1)) {



 query_t *VAR_22 = VAR_10->left;
 while (VAR_22->type == VAR_9 && !(VAR_22->flags & 1)) {
   FUNC_5 (FUNC_3 (VAR_22->left));
   VAR_22->left = FUNC_4 (VAR_10->type, VAR_22->left);
   VAR_22 = VAR_22->right;
 }
 FUNC_5 (VAR_22 == VAR_10->left->last->right);
 FUNC_5 (FUNC_3 (VAR_22));
 VAR_10->left->last->right = FUNC_4 (VAR_10->type, VAR_22);
 VAR_10->type = VAR_8;



 return FUNC_25 (VAR_10->left, VAR_11);
      }

      if (VAR_10->left->flags & 56) {
 return FUNC_25 (VAR_10->left, VAR_11);
      }

      FUNC_5 (VAR_10->left->type == VAR_2 && !(VAR_10->left->flags & 1));



      query_t *VAR_23 = FUNC_21 (VAR_10->type, VAR_10->left);



      if (VAR_23) {
 return FUNC_10 (FUNC_25 (VAR_23, VAR_11), FUNC_11 (VAR_10, VAR_11 & 1));
      }
      FUNC_5 (0);
    }
    FUNC_5 (0);
  }
  if (FUNC_0 (VAR_10)) {
    FUNC_22 (VAR_10);
    iterator_t VAR_24 = FUNC_25 (VAR_10, VAR_11);
    FUNC_22 (VAR_10);
    return FUNC_9 (VAR_24);
  }

  FUNC_5 (0);
}

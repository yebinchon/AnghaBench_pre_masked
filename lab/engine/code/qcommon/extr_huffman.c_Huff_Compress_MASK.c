
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int cursize; int* data; } ;
typedef TYPE_2__ msg_t ;
struct TYPE_10__ {TYPE_1__* tree; TYPE_1__* lhead; int blocNode; TYPE_1__* nodeList; TYPE_1__** loc; } ;
typedef TYPE_3__ huff_t ;
typedef int byte ;
struct TYPE_8__ {size_t symbol; int * right; int left; int parent; int * prev; int next; scalar_t__ weight; } ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int,int*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;

void FUNC_4(msg_t *VAR_2, int VAR_3) {
 int VAR_4, VAR_5, VAR_6;
 byte VAR_7[65536];
 byte* VAR_8;
 huff_t VAR_9;

 VAR_6 = VAR_2->cursize - VAR_3;
 VAR_8 = VAR_2->data + VAR_3;

 if (VAR_6<=0) {
  return;
 }

 FUNC_1(&VAR_9, 0, sizeof(huff_t));

 VAR_9.tree = VAR_9.lhead = VAR_9.loc[VAR_0] = &(VAR_9.nodeList[VAR_9.blocNode++]);
 VAR_9.tree->symbol = VAR_0;
 VAR_9.tree->weight = 0;
 VAR_9.lhead->next = *(VAR_9.lhead->prev = ((void*)0));
 VAR_9.tree->parent = VAR_9.tree->left = *(VAR_9.tree->right = ((void*)0));

 VAR_7[0] = (VAR_6>>8);
 VAR_7[1] = VAR_6&0xff;

 VAR_1 = 16;

 for (VAR_4=0; VAR_4<VAR_6; VAR_4++ ) {
  VAR_5 = VAR_8[VAR_4];
  FUNC_3(&VAR_9, VAR_5, VAR_7, VAR_6<<3);
  FUNC_2(&VAR_9, (byte)VAR_5);
 }




 if (VAR_1 % 8 == 0) {
  VAR_7[VAR_1 / 8] = 0;
 }

 VAR_1 += 8;

 VAR_2->cursize = (VAR_1>>3) + VAR_3;
 FUNC_0(VAR_2->data+VAR_3, VAR_7, (VAR_1>>3));
}

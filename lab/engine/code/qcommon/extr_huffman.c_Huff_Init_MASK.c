
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* tree; TYPE_1__* lhead; int blocNode; TYPE_1__* nodeList; TYPE_1__** loc; TYPE_1__* ltail; } ;
struct TYPE_6__ {TYPE_4__ compressor; TYPE_4__ decompressor; } ;
typedef TYPE_2__ huffman_t ;
typedef int huff_t ;
struct TYPE_5__ {size_t symbol; int * right; int left; int parent; int * prev; int next; scalar_t__ weight; } ;


 int FUNC_0 (TYPE_4__*,int ,int) ;
 size_t VAR_0 ;

void FUNC_1(huffman_t *VAR_1) {

 FUNC_0(&VAR_1->compressor, 0, sizeof(huff_t));
 FUNC_0(&VAR_1->decompressor, 0, sizeof(huff_t));


 VAR_1->decompressor.tree = VAR_1->decompressor.lhead = VAR_1->decompressor.ltail = VAR_1->decompressor.loc[VAR_0] = &(VAR_1->decompressor.nodeList[VAR_1->decompressor.blocNode++]);
 VAR_1->decompressor.tree->symbol = VAR_0;
 VAR_1->decompressor.tree->weight = 0;
 VAR_1->decompressor.lhead->next = *(VAR_1->decompressor.lhead->prev = ((void*)0));
 VAR_1->decompressor.tree->parent = VAR_1->decompressor.tree->left = *(VAR_1->decompressor.tree->right = ((void*)0));


 VAR_1->compressor.tree = VAR_1->compressor.lhead = VAR_1->compressor.loc[VAR_0] = &(VAR_1->compressor.nodeList[VAR_1->compressor.blocNode++]);
 VAR_1->compressor.tree->symbol = VAR_0;
 VAR_1->compressor.tree->weight = 0;
 VAR_1->compressor.lhead->next = *(VAR_1->compressor.lhead->prev = ((void*)0));
 VAR_1->compressor.tree->parent = VAR_1->compressor.tree->left = *(VAR_1->compressor.tree->right = ((void*)0));
}

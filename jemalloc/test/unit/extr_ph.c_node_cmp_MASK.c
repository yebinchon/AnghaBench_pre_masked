
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ key; } ;
typedef TYPE_1__ node_t ;



__attribute__((used)) static int
FUNC_0(const node_t *VAR_0, const node_t *VAR_1) {
 int VAR_2;

 VAR_2 = (VAR_0->key > VAR_1->key) - (VAR_0->key < VAR_1->key);
 if (VAR_2 == 0) {




  VAR_2 = (((uintptr_t)VAR_0) > ((uintptr_t)VAR_1))
      - (((uintptr_t)VAR_0) < ((uintptr_t)VAR_1));
 }
 return VAR_2;
}

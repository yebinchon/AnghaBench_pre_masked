
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpacked {scalar_t__ depth; int * entry; scalar_t__ data; int * index; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *) ;

__attribute__((used)) static unsigned long FUNC_4(struct unpacked *VAR_0)
{
 unsigned long VAR_1 = FUNC_3(VAR_0->index);
 FUNC_2(VAR_0->index);
 VAR_0->index = ((void*)0);
 if (VAR_0->data) {
  VAR_1 += FUNC_1(VAR_0->entry);
  FUNC_0(VAR_0->data);
 }
 VAR_0->entry = ((void*)0);
 VAR_0->depth = 0;
 return VAR_1;
}

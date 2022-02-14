
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int * index_data; int index_size; } ;


 int FUNC_0 (void*,int ) ;

void FUNC_1(struct packed_git *VAR_0)
{
 if (VAR_0->index_data) {
  FUNC_0((void *)VAR_0->index_data, VAR_0->index_size);
  VAR_0->index_data = ((void*)0);
 }
}

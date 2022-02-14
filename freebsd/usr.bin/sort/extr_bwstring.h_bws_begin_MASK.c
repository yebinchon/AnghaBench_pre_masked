
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwstring {int data; } ;
typedef int bwstring_iterator ;



__attribute__((used)) static inline bwstring_iterator
FUNC_0(struct bwstring *VAR_0)
{

 return (bwstring_iterator) (&(VAR_0->data));
}

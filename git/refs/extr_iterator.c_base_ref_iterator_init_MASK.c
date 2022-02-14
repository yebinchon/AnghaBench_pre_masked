
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator_vtable {int dummy; } ;
struct ref_iterator {int ordered; scalar_t__ flags; int * oid; int * refname; struct ref_iterator_vtable* vtable; } ;



void FUNC_0(struct ref_iterator *VAR_0,
       struct ref_iterator_vtable *VAR_1,
       int VAR_2)
{
 VAR_0->vtable = VAR_1;
 VAR_0->ordered = !!VAR_2;
 VAR_0->refname = ((void*)0);
 VAR_0->oid = ((void*)0);
 VAR_0->flags = 0;
}

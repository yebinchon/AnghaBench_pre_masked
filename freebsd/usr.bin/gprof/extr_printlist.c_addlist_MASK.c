
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stringlist {char* string; struct stringlist* next; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2(struct stringlist *VAR_0, char *VAR_1)
{
    struct stringlist *VAR_2;

    VAR_2 = (struct stringlist *) FUNC_1( sizeof(struct stringlist));
    if ( VAR_2 == (struct stringlist *) 0 )
 FUNC_0( 1 , "no room for printlist");
    VAR_2 -> next = VAR_0 -> next;
    VAR_2 -> string = VAR_1;
    VAR_0 -> next = VAR_2;
}

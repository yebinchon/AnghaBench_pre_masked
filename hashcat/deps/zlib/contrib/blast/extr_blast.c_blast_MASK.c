
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {unsigned int left; unsigned char* in; int first; scalar_t__ next; int out; void* outhow; scalar_t__ (* outfun ) (void*,int ,scalar_t__) ;int env; scalar_t__ bitcnt; scalar_t__ bitbuf; void* inhow; int infun; } ;
typedef scalar_t__ (* blast_out ) (void*,int ,scalar_t__) ;
typedef int blast_in ;


 int FUNC_0 (struct state*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*,int ,scalar_t__) ;

int FUNC_3(blast_in VAR_0, void *VAR_1, blast_out VAR_2, void *VAR_3,
          unsigned *VAR_4, unsigned char **VAR_5)
{
    struct state VAR_6;
    int VAR_7;


    VAR_6.infun = VAR_0;
    VAR_6.inhow = VAR_1;
    if (VAR_4 != ((void*)0) && *VAR_4) {
        VAR_6.left = *VAR_4;
        VAR_6.in = *VAR_5;
    }
    else
        VAR_6.left = 0;
    VAR_6.bitbuf = 0;
    VAR_6.bitcnt = 0;


    VAR_6.outfun = VAR_2;
    VAR_6.outhow = VAR_3;
    VAR_6.next = 0;
    VAR_6.first = 1;


    if (FUNC_1(VAR_6.env) != 0)
        VAR_7 = 2;
    else
        VAR_7 = FUNC_0(&VAR_6);


    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_6.left;
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_6.left ? VAR_6.in : ((void*)0);


    if (VAR_7 != 1 && VAR_6.next && VAR_6.outfun(VAR_6.outhow, VAR_6.out, VAR_6.next) && VAR_7 == 0)
        VAR_7 = 1;
    return VAR_7;
}

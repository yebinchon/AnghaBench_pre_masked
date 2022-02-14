
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint32_t ;
struct state {void* incnt; void* outcnt; int env; scalar_t__ bitcnt; scalar_t__ bitbuf; void* inlen; int * in; void* outlen; int * out; } ;
typedef int int32_t ;


 int FUNC_0 (struct state*,int) ;
 int FUNC_1 (struct state*) ;
 int FUNC_2 (struct state*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct state*) ;

int32_t FUNC_5(uint8_t *VAR_0,
             uint32_t *VAR_1,
             uint8_t *VAR_2,
             uint32_t *VAR_3)
{
    struct state VAR_4;
    int32_t VAR_5, VAR_6;
    int32_t VAR_7;


    VAR_4.out = VAR_0;
    VAR_4.outlen = *VAR_1;
    VAR_4.outcnt = 0;


    VAR_4.in = VAR_2;
    VAR_4.inlen = *VAR_3;
    VAR_4.incnt = 0;
    VAR_4.bitbuf = 0;
    VAR_4.bitcnt = 0;


    if (FUNC_3(VAR_4.env) != 0)
        VAR_7 = 2;
    else {

        do {
            VAR_5 = FUNC_0(&VAR_4, 1);
            VAR_6 = FUNC_0(&VAR_4, 2);
            VAR_7 = VAR_6 == 0 ? FUNC_4(&VAR_4) :
                  (VAR_6 == 1 ? FUNC_2(&VAR_4) :
                   (VAR_6 == 2 ? FUNC_1(&VAR_4) :
                    -1));
            if (VAR_7 != 0) break;
        } while (!VAR_5);
    }


    if (VAR_7 <= 0) {
        *VAR_1 = VAR_4.outcnt;
        *VAR_3 = VAR_4.incnt;
    }
    return VAR_7;
}

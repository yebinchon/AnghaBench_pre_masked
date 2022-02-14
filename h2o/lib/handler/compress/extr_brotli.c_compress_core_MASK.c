
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int size; TYPE_1__* entries; } ;
struct st_brotli_context_t {scalar_t__ buf_capacity; TYPE_2__ bufs; int state; } ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ raw; } ;
typedef int BrotliEncoderOperation ;


 int FUNC_0 (int ,int ,size_t*,int const**,size_t*,int **,int *) ;
 int FUNC_1 (struct st_brotli_context_t*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct st_brotli_context_t *VAR_0, BrotliEncoderOperation VAR_1, const uint8_t **VAR_2, size_t *VAR_3)
{
    size_t VAR_4 = VAR_0->bufs.size - 1;

    if (VAR_0->bufs.entries[VAR_4].len == VAR_0->buf_capacity) {
        FUNC_1(VAR_0);
        ++VAR_4;
    }
    uint8_t *VAR_5 = (uint8_t *)VAR_0->bufs.entries[VAR_4].raw + VAR_0->bufs.entries[VAR_4].len;
    size_t VAR_6 = VAR_0->buf_capacity - VAR_0->bufs.entries[VAR_4].len;

    if (!FUNC_0(VAR_0->state, VAR_1, VAR_3, VAR_2, &VAR_6, &VAR_5, ((void*)0)))
        FUNC_2("BrotliEncoderCompressStream");

    VAR_0->bufs.entries[VAR_4].len = VAR_0->buf_capacity - VAR_6;
}

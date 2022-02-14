
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int avail_in; scalar_t__ avail_out; void* next_out; void* next_in; } ;
struct TYPE_6__ {size_t size; TYPE_1__* entries; } ;
struct st_gzip_context_t {TYPE_3__ zs; TYPE_2__ bufs; } ;
typedef int (* processor ) (TYPE_3__*,int) ;
struct TYPE_5__ {scalar_t__ len; scalar_t__ raw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct st_gzip_context_t*) ;

__attribute__((used)) static size_t FUNC_2(struct st_gzip_context_t *VAR_4, const void *VAR_5, size_t VAR_6, int VAR_7, size_t VAR_8, processor VAR_9)
{
    int VAR_10;

    VAR_4->zs.next_in = (void *)VAR_5;
    VAR_4->zs.avail_in = (unsigned)VAR_6;




    do {

        if (VAR_4->bufs.entries[VAR_8].len + 32 > VAR_0) {
            ++VAR_8;
            if (VAR_8 == VAR_4->bufs.size)
                FUNC_1(VAR_4);
            VAR_4->bufs.entries[VAR_8].len = 0;
        }
        VAR_4->zs.next_out = (void *)(VAR_4->bufs.entries[VAR_8].raw + VAR_4->bufs.entries[VAR_8].len);
        VAR_4->zs.avail_out = (unsigned)(VAR_0 - VAR_4->bufs.entries[VAR_8].len);
        VAR_10 = VAR_9(&VAR_4->zs, VAR_7);

        FUNC_0(VAR_10 == VAR_2 || VAR_10 == VAR_3 || VAR_10 == VAR_1);
        VAR_4->bufs.entries[VAR_8].len = VAR_0 - VAR_4->zs.avail_out;
    } while (VAR_4->zs.avail_out == 0 && VAR_10 != VAR_3);

    return VAR_8;
}

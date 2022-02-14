
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mkuz_blk_info {unsigned int offset; scalar_t__ len; scalar_t__ blkno; int digest; } ;
struct mkuz_blkcache_itm {struct mkuz_blk_info hit; struct mkuz_blkcache_itm* next; } ;
struct mkuz_blk {struct mkuz_blk_info info; } ;
struct TYPE_2__ {struct mkuz_blkcache_itm* first; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_1 ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 struct mkuz_blkcache_itm* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct mkuz_blkcache_itm*,char,int) ;
 int VAR_2 ;
 int FUNC_8 (int,struct mkuz_blk const*,struct mkuz_blkcache_itm*) ;
 int FUNC_9 (char*) ;

struct mkuz_blk_info *
FUNC_10(int VAR_3, const struct mkuz_blk *VAR_4)
{
    struct mkuz_blkcache_itm *VAR_5;
    int VAR_6;
    unsigned char VAR_7;




    VAR_7 = FUNC_2(VAR_4->info.digest);
    if (VAR_1.first[VAR_7].hit.len == 0) {
        VAR_5 = &VAR_1.first[VAR_7];
    } else {
        for (VAR_5 = &VAR_1.first[VAR_7]; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
            if (VAR_5->hit.len != VAR_4->info.len)
                continue;
            if (FUNC_6(VAR_4->info.digest, VAR_5->hit.digest,
              sizeof(VAR_4->info.digest)) == 0) {
                break;
            }
        }
        if (VAR_5 != ((void*)0)) {
            VAR_6 = FUNC_8(VAR_3, VAR_4, VAR_5);
            if (VAR_6 == 1) {





                return (&VAR_5->hit);
            }
            if (VAR_6 == 0) {




                return (((void*)0));
            }
            FUNC_9("verify_match");
            return (((void*)0));
        }
        VAR_5 = FUNC_5(sizeof(struct mkuz_blkcache_itm));
        if (VAR_5 == ((void*)0))
            return (((void*)0));
        FUNC_7(VAR_5, '\0', sizeof(struct mkuz_blkcache_itm));
        VAR_5->next = VAR_1.first[VAR_7].next;
        VAR_1.first[VAR_7].next = VAR_5;
    }
    VAR_5->hit = VAR_4->info;
    return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ avail_out; scalar_t__ avail_in; int next_out; int next_in; } ;
struct mkuz_lzma {TYPE_2__ strm; int filters; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct mkuz_blk {scalar_t__ alen; TYPE_1__ info; int data; } ;
typedef scalar_t__ lzma_ret ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;

void
FUNC_4(void *VAR_5, const struct mkuz_blk *VAR_6, struct mkuz_blk *VAR_7)
{
 lzma_ret VAR_8;
 struct mkuz_lzma *VAR_9;

 VAR_9 = (struct mkuz_lzma *)VAR_5;

 VAR_8 = FUNC_3(&VAR_9->strm, VAR_9->filters, VAR_0);
 if (VAR_8 != VAR_3) {
  if (VAR_8 == VAR_2)
   FUNC_0(1, "can't compress data: LZMA_MEMLIMIT_ERROR");

  FUNC_0(1, "can't compress data: LZMA compressor ERROR");
 }

 VAR_9->strm.next_in = VAR_6->data;
 VAR_9->strm.avail_in = VAR_6->info.len;
 VAR_9->strm.next_out = VAR_7->data;
 VAR_9->strm.avail_out = VAR_7->alen;

 VAR_8 = FUNC_1(&VAR_9->strm, VAR_1);

 if (VAR_8 != VAR_4)
  FUNC_0(1, "lzma_code FINISH failed, code=%d, pos(in=%zd, "
      "out=%zd)", VAR_8, (VAR_6->info.len - VAR_9->strm.avail_in),
      (VAR_7->alen - VAR_9->strm.avail_out));





 VAR_7->info.len = VAR_7->alen - VAR_9->strm.avail_out;
}

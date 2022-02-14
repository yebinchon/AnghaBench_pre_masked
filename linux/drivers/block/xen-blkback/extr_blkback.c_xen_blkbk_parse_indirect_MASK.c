
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct xen_blkif_ring {int dummy; } ;
struct seg_buf {int nsec; int offset; } ;
struct phys_req {int nr_sects; } ;
struct pending_req {int nr_segs; TYPE_3__** segments; struct xen_blkif_ring* ring; struct grant_page** indirect_pages; } ;
struct grant_page {int page; int gref; } ;
struct blkif_request_segment {int last_sect; int first_sect; int gref; } ;
struct TYPE_4__ {int * indirect_grefs; } ;
struct TYPE_5__ {TYPE_1__ indirect; } ;
struct blkif_request {TYPE_2__ u; } ;
struct TYPE_6__ {int gref; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct blkif_request_segment* FUNC_3 (int ) ;
 int FUNC_4 (struct blkif_request_segment*) ;
 int FUNC_5 (struct xen_blkif_ring*,struct grant_page**,int,int) ;
 int FUNC_6 (struct xen_blkif_ring*,struct grant_page**,int) ;

__attribute__((used)) static int FUNC_7(struct blkif_request *VAR_4,
        struct pending_req *VAR_5,
        struct seg_buf VAR_6[],
        struct phys_req *VAR_7)
{
 struct grant_page **VAR_8 = VAR_5->indirect_pages;
 struct xen_blkif_ring *VAR_9 = VAR_5->ring;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct blkif_request_segment *VAR_15 = ((void*)0);

 VAR_13 = VAR_5->nr_segs;
 VAR_10 = FUNC_1(VAR_13);
 FUNC_0(VAR_10 > VAR_0);

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  VAR_8[VAR_14]->gref = VAR_4->u.indirect.indirect_grefs[VAR_14];

 VAR_11 = FUNC_5(VAR_9, VAR_8, VAR_10, 1);
 if (VAR_11)
  goto unmap;

 for (VAR_12 = 0, VAR_14 = 0; VAR_12 < VAR_13; VAR_12++) {
  uint8_t VAR_16, VAR_17;

  if ((VAR_12 % VAR_2) == 0) {

   if (VAR_15)
    FUNC_4(VAR_15);
   VAR_15 = FUNC_3(VAR_8[VAR_12/VAR_2]->page);
  }
  VAR_14 = VAR_12 % VAR_2;

  VAR_5->segments[VAR_12]->gref = VAR_15[VAR_14].gref;

  VAR_16 = FUNC_2(VAR_15[VAR_14].first_sect);
  VAR_17 = FUNC_2(VAR_15[VAR_14].last_sect);
  if (VAR_17 >= (VAR_3 >> 9) || VAR_17 < VAR_16) {
   VAR_11 = -VAR_1;
   goto unmap;
  }

  VAR_6[VAR_12].nsec = VAR_17 - VAR_16 + 1;
  VAR_6[VAR_12].offset = VAR_16 << 9;
  VAR_7->nr_sects += VAR_6[VAR_12].nsec;
 }

unmap:
 if (VAR_15)
  FUNC_4(VAR_15);
 FUNC_6(VAR_9, VAR_8, VAR_10);
 return VAR_11;
}

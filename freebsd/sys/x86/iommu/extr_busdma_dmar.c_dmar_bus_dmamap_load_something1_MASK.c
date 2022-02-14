
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int uintmax_t ;
struct dmar_map_entry {scalar_t__ end; int start; int flags; } ;
struct dmar_map_entries_tailq {int dummy; } ;
struct dmar_domain {int dummy; } ;
struct dmar_ctx {struct dmar_domain* domain; } ;
struct bus_dmamap_dmar {struct dmar_map_entries_tailq map_entries; scalar_t__ cansleep; } ;
struct TYPE_5__ {int nsegments; scalar_t__ maxsegsz; int alignment; scalar_t__ lowaddr; int highaddr; scalar_t__ boundary; } ;
struct bus_dma_tag_dmar {TYPE_2__ common; struct dmar_ctx* ctx; TYPE_1__* segments; } ;
typedef scalar_t__ dmar_gaddr_t ;
typedef scalar_t__ bus_size_t ;
struct TYPE_4__ {int ds_addr; scalar_t__ ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dmar_map_entries_tailq*,struct dmar_map_entry*,int ) ;
 int VAR_9 ;
 int FUNC_5 (struct dmar_domain*,TYPE_2__*,scalar_t__,int,int,int,int *,struct dmar_map_entry**) ;
 int FUNC_6 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_9(struct bus_dma_tag_dmar *VAR_11,
    struct bus_dmamap_dmar *VAR_12, vm_page_t *VAR_13, int VAR_14, bus_size_t VAR_15,
    int VAR_16, bus_dma_segment_t *VAR_17, int *VAR_18,
    struct dmar_map_entries_tailq *VAR_19)
{
 struct dmar_ctx *VAR_20;
 struct dmar_domain *VAR_21;
 struct dmar_map_entry *VAR_22;
 dmar_gaddr_t VAR_23;
 bus_size_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;

 FUNC_2(VAR_14 < VAR_7, ("offset %d", VAR_14));
 if (VAR_17 == ((void*)0))
  VAR_17 = VAR_11->segments;
 VAR_20 = VAR_11->ctx;
 VAR_21 = VAR_20->domain;
 VAR_28 = *VAR_18;
 VAR_25 = 0;
 VAR_26 = 0;
 while (VAR_15 > 0) {
  VAR_28++;
  if (VAR_28 >= VAR_11->common.nsegments) {
   VAR_25 = VAR_8;
   break;
  }
  VAR_24 = VAR_15 > VAR_11->common.maxsegsz ?
      VAR_11->common.maxsegsz : VAR_15;
  VAR_23 = FUNC_7(VAR_14 + VAR_24);





  VAR_27 = VAR_12->cansleep ? VAR_2 : 0;
  if (VAR_28 + 1 < VAR_11->common.nsegments)
   VAR_27 |= VAR_1;

  VAR_25 = FUNC_5(VAR_21, &VAR_11->common, VAR_23, VAR_14,
      VAR_4 |
      ((VAR_16 & VAR_0) == 0 ? VAR_5 : 0),
      VAR_27, VAR_13 + VAR_26, &VAR_22);
  if (VAR_25 != 0)
   break;
  if ((VAR_27 & VAR_1) != 0) {
   FUNC_2(VAR_23 >= VAR_22->end - VAR_22->start,
       ("split increased entry size %jx %jx %jx",
       (uintmax_t)VAR_23, (uintmax_t)VAR_22->start,
       (uintmax_t)VAR_22->end));
   VAR_23 = VAR_22->end - VAR_22->start;
   if (VAR_24 > VAR_23)
    VAR_24 = VAR_23;
  } else {
   FUNC_2(VAR_22->end - VAR_22->start == VAR_23,
       ("no split allowed %jx %jx %jx",
       (uintmax_t)VAR_23, (uintmax_t)VAR_22->start,
       (uintmax_t)VAR_22->end));
  }
  if (VAR_14 + VAR_24 > VAR_23)
   VAR_24 = VAR_23 - VAR_14;
  if (VAR_24 > VAR_11->common.maxsegsz)
   VAR_24 = VAR_11->common.maxsegsz;

  FUNC_2(((VAR_22->start + VAR_14) & (VAR_11->common.alignment - 1))
      == 0,
      ("alignment failed: ctx %p start 0x%jx offset %x "
      "align 0x%jx", VAR_20, (uintmax_t)VAR_22->start, VAR_14,
      (uintmax_t)VAR_11->common.alignment));
  FUNC_2(VAR_22->end <= VAR_11->common.lowaddr ||
      VAR_22->start >= VAR_11->common.highaddr,
      ("entry placement failed: ctx %p start 0x%jx end 0x%jx "
      "lowaddr 0x%jx highaddr 0x%jx", VAR_20,
      (uintmax_t)VAR_22->start, (uintmax_t)VAR_22->end,
      (uintmax_t)VAR_11->common.lowaddr,
      (uintmax_t)VAR_11->common.highaddr));
  FUNC_2(FUNC_6(VAR_22->start + VAR_14, VAR_24,
      VAR_11->common.boundary),
      ("boundary failed: ctx %p start 0x%jx end 0x%jx "
      "boundary 0x%jx", VAR_20, (uintmax_t)VAR_22->start,
      (uintmax_t)VAR_22->end, (uintmax_t)VAR_11->common.boundary));
  FUNC_2(VAR_24 <= VAR_11->common.maxsegsz,
      ("segment too large: ctx %p start 0x%jx end 0x%jx "
      "buflen1 0x%jx maxsegsz 0x%jx", VAR_20,
      (uintmax_t)VAR_22->start, (uintmax_t)VAR_22->end,
      (uintmax_t)VAR_24, (uintmax_t)VAR_11->common.maxsegsz));

  FUNC_0(VAR_21);
  FUNC_4(&VAR_12->map_entries, VAR_22, VAR_9);
  VAR_22->flags |= VAR_3;
  FUNC_1(VAR_21);
  FUNC_4(VAR_19, VAR_22, VAR_10);

  VAR_17[VAR_28].ds_addr = VAR_22->start + VAR_14;
  VAR_17[VAR_28].ds_len = VAR_24;

  VAR_26 += FUNC_3(FUNC_8(VAR_14 + VAR_24));
  VAR_14 += VAR_24;
  VAR_14 &= VAR_6;
  VAR_15 -= VAR_24;
 }
 if (VAR_25 == 0)
  *VAR_18 = VAR_28;
 return (VAR_25);
}

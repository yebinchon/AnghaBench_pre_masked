
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef unsigned int uint64_t ;
typedef unsigned int uint32_t ;
struct TYPE_15__ {size_t cmd_prefix_; size_t insert_len_; size_t dist_prefix_; int dist_extra_; } ;
struct TYPE_13__ {size_t num_types; int num_blocks; int lengths; int types; } ;
struct TYPE_12__ {size_t num_types; int num_blocks; int lengths; int types; } ;
struct TYPE_11__ {size_t num_types; int num_blocks; int lengths; int types; } ;
struct TYPE_14__ {scalar_t__ literal_context_map_size; scalar_t__ distance_context_map_size; int distance_context_map; int literal_context_map; int distance_histograms_size; int distance_histograms; int command_histograms_size; int command_histograms; int literal_histograms_size; int literal_histograms; TYPE_3__ literal_split; TYPE_2__ distance_split; TYPE_1__ command_split; } ;
typedef TYPE_4__ MetaBlockSplit ;
typedef int MemoryManager ;
typedef unsigned int ContextType ;
typedef TYPE_5__ Command ;
typedef int BlockEncoder ;
typedef scalar_t__ BROTLI_BOOL ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_3 (unsigned int,unsigned int,size_t*,size_t*) ;
 int FUNC_4 (int *,int,size_t*,size_t*) ;
 int FUNC_5 (int *,int *,int ,int ,int,size_t*,size_t*) ;
 int FUNC_6 (int *,int *,int ,int ,int,size_t*,size_t*) ;
 int FUNC_7 (int *,int *,int ,int ,int,size_t*,size_t*) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (TYPE_5__ const*) ;
 size_t FUNC_10 (TYPE_5__ const*) ;
 size_t FUNC_11 (size_t,size_t,unsigned int) ;
 int FUNC_12 (int *,int ,scalar_t__,int ,int,size_t*,size_t*) ;
 int VAR_4 ;
 int FUNC_13 (int *,size_t,size_t,int ,int ,int ) ;
 int FUNC_14 (size_t*,size_t*) ;
 int VAR_5 ;
 int FUNC_15 (TYPE_5__ const*,size_t*,size_t*) ;
 int FUNC_16 (scalar_t__,size_t,size_t*,size_t*) ;
 int FUNC_17 (int *,size_t const,size_t*,size_t*) ;
 int FUNC_18 (int *,size_t,size_t,int ,size_t*,size_t*,int ) ;
 int FUNC_19 (int ,int ,int,size_t*,size_t*) ;
 int VAR_6 ;

void FUNC_20(MemoryManager* VAR_7,
                          const uint8_t* VAR_8,
                          size_t VAR_9,
                          size_t VAR_10,
                          size_t VAR_11,
                          uint8_t VAR_12,
                          uint8_t VAR_13,
                          BROTLI_BOOL VAR_14,
                          uint32_t VAR_15,
                          uint32_t VAR_16,
                          ContextType VAR_17,
                          const Command *VAR_18,
                          size_t VAR_19,
                          const MetaBlockSplit* VAR_20,
                          size_t *VAR_21,
                          uint8_t *VAR_22) {
  size_t VAR_23 = VAR_9;
  size_t VAR_24;
  size_t VAR_25 =
      VAR_3 + VAR_15 +
      (48u << VAR_16);
  VAR_4* VAR_6;
  BlockEncoder VAR_26;
  BlockEncoder VAR_27;
  BlockEncoder VAR_28;

  FUNC_16(VAR_14, VAR_10, VAR_21, VAR_22);

  VAR_6 = FUNC_0(VAR_7, VAR_4, VAR_5);
  if (FUNC_2(VAR_7)) return;
  FUNC_13(&VAR_26, 256, VAR_20->literal_split.num_types,
      VAR_20->literal_split.types, VAR_20->literal_split.lengths,
      VAR_20->literal_split.num_blocks);
  FUNC_13(&VAR_27, VAR_2,
      VAR_20->command_split.num_types, VAR_20->command_split.types,
      VAR_20->command_split.lengths, VAR_20->command_split.num_blocks);
  FUNC_13(&VAR_28, VAR_25,
      VAR_20->distance_split.num_types, VAR_20->distance_split.types,
      VAR_20->distance_split.lengths, VAR_20->distance_split.num_blocks);

  FUNC_4(&VAR_26, VAR_6, VAR_21, VAR_22);
  FUNC_4(&VAR_27, VAR_6, VAR_21, VAR_22);
  FUNC_4(
      &VAR_28, VAR_6, VAR_21, VAR_22);

  FUNC_3(2, VAR_16, VAR_21, VAR_22);
  FUNC_3(4, VAR_15 >> VAR_16,
                  VAR_21, VAR_22);
  for (VAR_24 = 0; VAR_24 < VAR_20->literal_split.num_types; ++VAR_24) {
    FUNC_3(2, VAR_17, VAR_21, VAR_22);
  }

  if (VAR_20->literal_context_map_size == 0) {
    FUNC_19(VAR_20->literal_histograms_size,
        VAR_1, VAR_6, VAR_21, VAR_22);
  } else {
    FUNC_12(VAR_7,
        VAR_20->literal_context_map, VAR_20->literal_context_map_size,
        VAR_20->literal_histograms_size, VAR_6, VAR_21, VAR_22);
    if (FUNC_2(VAR_7)) return;
  }

  if (VAR_20->distance_context_map_size == 0) {
    FUNC_19(VAR_20->distance_histograms_size,
        VAR_0, VAR_6, VAR_21, VAR_22);
  } else {
    FUNC_12(VAR_7,
        VAR_20->distance_context_map, VAR_20->distance_context_map_size,
        VAR_20->distance_histograms_size, VAR_6, VAR_21, VAR_22);
    if (FUNC_2(VAR_7)) return;
  }

  FUNC_7(VAR_7, &VAR_26, VAR_20->literal_histograms,
      VAR_20->literal_histograms_size, VAR_6, VAR_21, VAR_22);
  if (FUNC_2(VAR_7)) return;
  FUNC_5(VAR_7, &VAR_27, VAR_20->command_histograms,
      VAR_20->command_histograms_size, VAR_6, VAR_21, VAR_22);
  if (FUNC_2(VAR_7)) return;
  FUNC_6(VAR_7, &VAR_28, VAR_20->distance_histograms,
      VAR_20->distance_histograms_size, VAR_6, VAR_21, VAR_22);
  if (FUNC_2(VAR_7)) return;
  FUNC_1(VAR_7, VAR_6);

  for (VAR_24 = 0; VAR_24 < VAR_19; ++VAR_24) {
    const Command VAR_29 = VAR_18[VAR_24];
    size_t VAR_30 = VAR_29.cmd_prefix_;
    FUNC_17(&VAR_27, VAR_30, VAR_21, VAR_22);
    FUNC_15(&VAR_29, VAR_21, VAR_22);
    if (VAR_20->literal_context_map_size == 0) {
      size_t VAR_31;
      for (VAR_31 = VAR_29.insert_len_; VAR_31 != 0; --VAR_31) {
        FUNC_17(&VAR_26, VAR_8[VAR_23 & VAR_11], VAR_21, VAR_22);
        ++VAR_23;
      }
    } else {
      size_t VAR_32;
      for (VAR_32 = VAR_29.insert_len_; VAR_32 != 0; --VAR_32) {
        size_t VAR_33 = FUNC_11(VAR_12, VAR_13, VAR_17);
        uint8_t VAR_34 = VAR_8[VAR_23 & VAR_11];
        FUNC_18(&VAR_26, VAR_34, VAR_33,
            VAR_20->literal_context_map, VAR_21, VAR_22,
            VAR_1);
        VAR_13 = VAR_12;
        VAR_12 = VAR_34;
        ++VAR_23;
      }
    }
    VAR_23 += FUNC_9(&VAR_29);
    if (FUNC_9(&VAR_29)) {
      VAR_13 = VAR_8[(VAR_23 - 2) & VAR_11];
      VAR_12 = VAR_8[(VAR_23 - 1) & VAR_11];
      if (VAR_29.cmd_prefix_ >= 128) {
        size_t VAR_35 = VAR_29.dist_prefix_;
        uint32_t VAR_36 = VAR_29.dist_extra_ >> 24;
        uint64_t VAR_37 = VAR_29.dist_extra_ & 0xffffff;
        if (VAR_20->distance_context_map_size == 0) {
          FUNC_17(&VAR_28, VAR_35, VAR_21, VAR_22);
        } else {
          size_t VAR_38 = FUNC_10(&VAR_29);
          FUNC_18(&VAR_28, VAR_35, VAR_38,
              VAR_20->distance_context_map, VAR_21, VAR_22,
              VAR_0);
        }
        FUNC_3(VAR_36, VAR_37, VAR_21, VAR_22);
      }
    }
  }
  FUNC_8(VAR_7, &VAR_28);
  FUNC_8(VAR_7, &VAR_27);
  FUNC_8(VAR_7, &VAR_26);
  if (VAR_14) {
    FUNC_14(VAR_21, VAR_22);
  }
}

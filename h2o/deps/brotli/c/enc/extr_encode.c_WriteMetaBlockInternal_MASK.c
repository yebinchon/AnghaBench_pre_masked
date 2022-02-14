
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int dist_cache ;
struct TYPE_4__ {scalar_t__ mode; int quality; int size_hint; int disable_literal_context_modeling; } ;
typedef int MetaBlockSplit ;
typedef int MemoryManager ;
typedef int ContextType ;
typedef int Command ;
typedef TYPE_1__ BrotliEncoderParams ;
typedef int BROTLI_BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,size_t const*,int const,size_t const,TYPE_1__ const*,size_t const,size_t const,int *,size_t const,int ,int *) ;
 int FUNC_2 (int *,size_t const*,int const,size_t const,size_t const,size_t const,int ,size_t,int const*,int *,size_t const,int *) ;
 int FUNC_3 (size_t const*,int const,size_t const,size_t const,int ) ;
 int FUNC_4 (int,int,int *) ;
 int FUNC_5 (int *,size_t const*,int const,size_t const,size_t const,size_t const,size_t const,int const,int,int,int ,int *,size_t const,int *,size_t*,size_t*) ;
 int FUNC_6 (int *,size_t const*,int const,size_t const,size_t const,int const,int *,size_t const,size_t*,size_t*) ;
 int FUNC_7 (int *,size_t const*,int const,size_t const,size_t const,int const,int *,size_t const,size_t*,size_t*) ;
 int FUNC_8 (int const,size_t const*,int const,size_t const,size_t const,size_t*,size_t*) ;
 int FUNC_9 (int,int,size_t*,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (size_t const*,int const,size_t const,size_t const,int ,int ,size_t*,int const**) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int *,size_t const,int,int) ;
 int FUNC_14 (size_t const*,size_t const,int const,size_t const,size_t const,size_t const) ;
 int FUNC_15 (int const) ;
 int VAR_8 ;
 int FUNC_16 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_17(MemoryManager* VAR_9,
                                   const uint8_t* VAR_10,
                                   const size_t VAR_11,
                                   const uint64_t VAR_12,
                                   const size_t VAR_13,
                                   const BROTLI_BOOL VAR_14,
                                   const BrotliEncoderParams* VAR_15,
                                   const uint8_t VAR_16,
                                   const uint8_t VAR_17,
                                   const size_t VAR_18,
                                   const size_t VAR_19,
                                   Command* VAR_20,
                                   const int* VAR_21,
                                   int* VAR_22,
                                   size_t* VAR_23,
                                   uint8_t* VAR_24) {
  const uint32_t VAR_25 = FUNC_15(VAR_12);
  uint8_t VAR_26;
  uint8_t VAR_27;
  uint32_t VAR_28 = 0;
  uint32_t VAR_29 = 0;

  if (VAR_13 == 0) {

    FUNC_9(2, 3, VAR_23, VAR_24);
    *VAR_23 = (*VAR_23 + 7u) & ~7u;
    return;
  }

  if (!FUNC_14(VAR_10, VAR_11, VAR_12, VAR_13,
                      VAR_18, VAR_19)) {


    FUNC_16(VAR_22, VAR_21, 4 * sizeof(VAR_22[0]));
    FUNC_8(VAR_14, VAR_10,
                                     VAR_25, VAR_11, VAR_13,
                                     VAR_23, VAR_24);
    return;
  }

  VAR_26 = VAR_24[0];
  VAR_27 = (uint8_t)(*VAR_23 & 0xff);
  if (VAR_15->quality >= VAR_7 &&
      VAR_15->mode == VAR_0) {
    VAR_28 = 12;
    VAR_29 = 1;
    FUNC_13(VAR_20,
                              VAR_19,
                              VAR_28,
                              VAR_29);
  }
  if (VAR_15->quality <= VAR_3) {
    FUNC_6(VAR_9, VAR_10, VAR_25,
                             VAR_13, VAR_11, VAR_14,
                             VAR_20, VAR_19,
                             VAR_23, VAR_24);
    if (FUNC_0(VAR_9)) return;
  } else if (VAR_15->quality < VAR_4) {
    FUNC_7(VAR_9, VAR_10, VAR_25,
                                VAR_13, VAR_11, VAR_14,
                                VAR_20, VAR_19,
                                VAR_23, VAR_24);
    if (FUNC_0(VAR_9)) return;
  } else {
    ContextType VAR_30 = VAR_2;
    MetaBlockSplit VAR_31;
    FUNC_12(&VAR_31);
    if (VAR_15->quality < VAR_5) {
      size_t VAR_32 = 1;
      const uint32_t* VAR_33 = ((void*)0);
      if (!VAR_15->disable_literal_context_modeling) {
        FUNC_10(
            VAR_10, VAR_25, VAR_13, VAR_11, VAR_15->quality,
            VAR_15->size_hint, &VAR_32,
            &VAR_33);
      }
      FUNC_2(VAR_9, VAR_10, VAR_25, VAR_11,
          VAR_16, VAR_17, VAR_30, VAR_32,
          VAR_33, VAR_20, VAR_19, &VAR_31);
      if (FUNC_0(VAR_9)) return;
    } else {
      if (!FUNC_3(VAR_10, VAR_25, VAR_11, VAR_13,
                              VAR_8)) {
        VAR_30 = VAR_1;
      }
      FUNC_1(VAR_9, VAR_10, VAR_25, VAR_11, VAR_15,
                           VAR_16, VAR_17,
                           VAR_20, VAR_19,
                           VAR_30,
                           &VAR_31);
      if (FUNC_0(VAR_9)) return;
    }
    if (VAR_15->quality >= VAR_6) {
      FUNC_4(VAR_28,
                               VAR_29,
                               &VAR_31);
    }
    FUNC_5(VAR_9, VAR_10, VAR_25, VAR_13, VAR_11,
                         VAR_16, VAR_17,
                         VAR_14,
                         VAR_28,
                         VAR_29,
                         VAR_30,
                         VAR_20, VAR_19,
                         &VAR_31,
                         VAR_23, VAR_24);
    if (FUNC_0(VAR_9)) return;
    FUNC_11(VAR_9, &VAR_31);
  }
  if (VAR_13 + 4 < (*VAR_23 >> 3)) {

    FUNC_16(VAR_22, VAR_21, 4 * sizeof(VAR_22[0]));
    VAR_24[0] = VAR_26;
    *VAR_23 = VAR_27;
    FUNC_8(VAR_14, VAR_10,
                                     VAR_25, VAR_11,
                                     VAR_13, VAR_23, VAR_24);
  }
}

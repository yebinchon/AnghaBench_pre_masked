
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_12__ {int data_; } ;
struct TYPE_11__ {int data_; } ;
struct TYPE_10__ {int data_; } ;
typedef int MemoryManager ;
typedef TYPE_1__ HistogramLiteral ;
typedef TYPE_2__ HistogramDistance ;
typedef TYPE_3__ HistogramCommand ;
typedef int Command ;
typedef scalar_t__ BROTLI_BOOL ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,int ,size_t*,int *) ;
 int FUNC_4 (int ,int,int,int *,int *,size_t*,int *) ;
 int FUNC_5 (int const*,size_t,size_t,int const*,size_t,TYPE_1__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_9 (size_t*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (scalar_t__,size_t,size_t*,int *) ;
 int FUNC_11 (int const*,size_t,size_t,int const*,size_t,int *,int *,int *,int *,int *,int *,size_t*,int *) ;
 int VAR_5 ;

void FUNC_12(MemoryManager* VAR_6,
                                 const uint8_t* VAR_7,
                                 size_t VAR_8,
                                 size_t VAR_9,
                                 size_t VAR_10,
                                 BROTLI_BOOL VAR_11,
                                 const Command *VAR_12,
                                 size_t VAR_13,
                                 size_t *VAR_14,
                                 uint8_t *VAR_15) {
  HistogramLiteral VAR_16;
  HistogramCommand VAR_17;
  HistogramDistance VAR_18;
  uint8_t VAR_19[VAR_1];
  uint16_t VAR_20[VAR_1];
  uint8_t VAR_21[VAR_0];
  uint16_t VAR_22[VAR_0];
  uint8_t VAR_23[VAR_4];
  uint16_t VAR_24[VAR_4];
  VAR_2* VAR_5;

  FUNC_10(VAR_11, VAR_9, VAR_14, VAR_15);

  FUNC_8(&VAR_16);
  FUNC_6(&VAR_17);
  FUNC_7(&VAR_18);

  FUNC_5(VAR_7, VAR_8, VAR_10, VAR_12, VAR_13,
                  &VAR_16, &VAR_17, &VAR_18);

  FUNC_3(13, 0, VAR_14, VAR_15);

  VAR_5 = FUNC_0(VAR_6, VAR_2, VAR_3);
  if (FUNC_2(VAR_6)) return;
  FUNC_4(VAR_16.data_, VAR_1, VAR_5,
                           VAR_19, VAR_20,
                           VAR_14, VAR_15);
  FUNC_4(VAR_17.data_, VAR_0, VAR_5,
                           VAR_21, VAR_22,
                           VAR_14, VAR_15);
  FUNC_4(VAR_18.data_, VAR_4,
                           VAR_5,
                           VAR_23, VAR_24,
                           VAR_14, VAR_15);
  FUNC_1(VAR_6, VAR_5);
  FUNC_11(VAR_7, VAR_8, VAR_10, VAR_12,
                            VAR_13, VAR_19, VAR_20,
                            VAR_21, VAR_22,
                            VAR_23, VAR_24,
                            VAR_14, VAR_15);
  if (VAR_11) {
    FUNC_9(VAR_14, VAR_15);
  }
}

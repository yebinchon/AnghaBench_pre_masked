
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {size_t literal_histograms_size; size_t command_histograms_size; size_t distance_histograms_size; TYPE_3__* distance_histograms; TYPE_2__* command_histograms; TYPE_1__* literal_histograms; } ;
struct TYPE_8__ {int data_; } ;
struct TYPE_7__ {int data_; } ;
struct TYPE_6__ {int data_; } ;
typedef TYPE_4__ MetaBlockSplit ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,int ,int *) ;

void FUNC_1(size_t VAR_3,
                              size_t VAR_4,
                              MetaBlockSplit* VAR_5) {
  uint8_t VAR_6[VAR_1];
  size_t VAR_7;
  size_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5->literal_histograms_size; ++VAR_8) {
    FUNC_0(256, VAR_5->literal_histograms[VAR_8].data_,
                                      VAR_6);
  }
  for (VAR_8 = 0; VAR_8 < VAR_5->command_histograms_size; ++VAR_8) {
    FUNC_0(VAR_1,
                                      VAR_5->command_histograms[VAR_8].data_,
                                      VAR_6);
  }
  VAR_7 = VAR_2 +
      VAR_3 +
      ((2 * VAR_0) << VAR_4);
  for (VAR_8 = 0; VAR_8 < VAR_5->distance_histograms_size; ++VAR_8) {
    FUNC_0(VAR_7,
                                      VAR_5->distance_histograms[VAR_8].data_,
                                      VAR_6);
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* samples; } ;
struct TYPE_4__ {int cycle_count; scalar_t__ ext_chan_busy; scalar_t__ chan_busy; scalar_t__ rx_busy; scalar_t__ tx_busy; } ;
typedef TYPE_2__ HAL_CHANNEL_SURVEY ;


 int VAR_0 ;
 int FUNC_0 (char*,float,float,float,float) ;

__attribute__((used)) static void
FUNC_1(HAL_CHANNEL_SURVEY *VAR_1)
{
 int VAR_2;
 float VAR_3 = 0.0, VAR_4 = 0.0, VAR_5 = 0.0, VAR_6 = 0.0;
 float VAR_7 = 0.0, VAR_8 = 0.0, VAR_9 = 0.0, VAR_10 = 0.0;
 uint64_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 float VAR_15 = 100.0, VAR_16 = 100.0, VAR_17 = 100.0, VAR_18 = 100.0;
 int VAR_19 = 0;
 int VAR_20 = 0, VAR_21 = 0;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {



  if (VAR_1->samples[VAR_2].cycle_count == 0)
   continue;
  VAR_19++;




  VAR_20 = VAR_1->samples[VAR_2].cycle_count;
  if (VAR_20 > VAR_21)
   VAR_21 = VAR_20;




  VAR_3 = (float) VAR_1->samples[VAR_2].tx_busy * 100.0 /
      VAR_1->samples[VAR_2].cycle_count;
  VAR_4 = (float) VAR_1->samples[VAR_2].rx_busy * 100.0 /
      VAR_1->samples[VAR_2].cycle_count;
  VAR_5 = (float) VAR_1->samples[VAR_2].chan_busy * 100.0 /
      VAR_1->samples[VAR_2].cycle_count;
  VAR_6 = (float) VAR_1->samples[VAR_2].ext_chan_busy * 100.0 /
      VAR_1->samples[VAR_2].cycle_count;






  VAR_11 += (uint64_t) VAR_1->samples[VAR_2].tx_busy * 10000 /
      VAR_1->samples[VAR_2].cycle_count;
  VAR_12 += (uint64_t) VAR_1->samples[VAR_2].rx_busy * 10000 /
      VAR_1->samples[VAR_2].cycle_count;
  VAR_13 += (uint64_t) VAR_1->samples[VAR_2].chan_busy * 10000 /
      VAR_1->samples[VAR_2].cycle_count;
  VAR_14 += (uint64_t) VAR_1->samples[VAR_2].ext_chan_busy * 10000 /
      VAR_1->samples[VAR_2].cycle_count;




  if (VAR_3 > VAR_7)
   VAR_7 = VAR_3;
  if (VAR_4 > VAR_8)
   VAR_8 = VAR_4;
  if (VAR_5 > VAR_9)
   VAR_9 = VAR_5;
  if (VAR_6 > VAR_10)
   VAR_10 = VAR_6;




  if (VAR_3 < VAR_15)
   VAR_15 = VAR_3;
  if (VAR_4 < VAR_16)
   VAR_16 = VAR_4;
  if (VAR_5 < VAR_17)
   VAR_17 = VAR_5;
  if (VAR_6 < VAR_18)
   VAR_18 = VAR_6;
 }

 FUNC_0("(%4.1f %4.1f %4.1f %4.1f) ",
     VAR_15, VAR_16, VAR_17, VAR_18);
 FUNC_0("(%4.1f %4.1f %4.1f %4.1f) ",
     VAR_19 == 0 ? 0.0 : (float) (VAR_11 / VAR_19) / 100.0,
     VAR_19 == 0 ? 0.0 : (float) (VAR_12 / VAR_19) / 100.0,
     VAR_19 == 0 ? 0.0 : (float) (VAR_13 / VAR_19) / 100.0,
     VAR_19 == 0 ? 0.0 : (float) (VAR_14 / VAR_19) / 100.0);
 FUNC_0("(%4.1f %4.1f %4.1f %4.1f)\n",
     VAR_7, VAR_8, VAR_9, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pm8xxx_xoadc {TYPE_1__* graph; int dev; } ;
struct pm8xxx_chan_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ dy; scalar_t__ gnd; void* dx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,void*,scalar_t__) ;
 struct pm8xxx_chan_info* FUNC_2 (struct pm8xxx_xoadc*,int ) ;
 int FUNC_3 (struct pm8xxx_xoadc*,struct pm8xxx_chan_info const*,scalar_t__*) ;
 int FUNC_4 (struct pm8xxx_xoadc*,struct pm8xxx_chan_info const*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(struct pm8xxx_xoadc *VAR_10)
{
 const struct pm8xxx_chan_info *VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 int VAR_16;

 VAR_10->graph[VAR_7].dx = VAR_6;
 VAR_10->graph[VAR_8].dx = VAR_9;


 VAR_11 = FUNC_2(VAR_10, VAR_3);
 if (!VAR_11)
  return -VAR_2;
 VAR_16 = FUNC_3(VAR_10, VAR_11, &VAR_12);
 if (VAR_16) {
  FUNC_0(VAR_10->dev, "could not read 1.25V reference channel\n");
  return -VAR_2;
 }
 VAR_11 = FUNC_2(VAR_10, VAR_4);
 if (!VAR_11)
  return -VAR_2;
 VAR_16 = FUNC_3(VAR_10, VAR_11, &VAR_13);
 if (VAR_16) {
  FUNC_0(VAR_10->dev, "could not read 0.625V reference channel\n");
  return -VAR_2;
 }
 if (VAR_12 == VAR_13) {
  FUNC_0(VAR_10->dev, "read same ADC code for 1.25V and 0.625V\n");
  return -VAR_2;
 }

 VAR_10->graph[VAR_7].dy = VAR_12 - VAR_13;
 VAR_10->graph[VAR_7].gnd = VAR_13;

 FUNC_1(VAR_10->dev, "absolute calibration dx = %d uV, dy = %d units\n",
   VAR_6, VAR_10->graph[VAR_7].dy);


 VAR_11 = FUNC_2(VAR_10, VAR_5);
 if (!VAR_11)
  return -VAR_2;
 VAR_16 = FUNC_4(VAR_10, VAR_11, VAR_1,
          &VAR_14, 1);
 if (VAR_16) {
  FUNC_0(VAR_10->dev, "could not read MUXOFF reference channel\n");
  return -VAR_2;
 }
 VAR_16 = FUNC_4(VAR_10, VAR_11, VAR_0,
          &VAR_15, 1);
 if (VAR_16) {
  FUNC_0(VAR_10->dev, "could not read MUXOFF reference channel\n");
  return -VAR_2;
 }
 VAR_10->graph[VAR_8].dy =
  VAR_14 - VAR_15;
 VAR_10->graph[VAR_8].gnd = VAR_15;

 FUNC_1(VAR_10->dev, "ratiometric calibration dx = %d, dy = %d units\n",
   VAR_9,
   VAR_10->graph[VAR_8].dy);

 return 0;
}

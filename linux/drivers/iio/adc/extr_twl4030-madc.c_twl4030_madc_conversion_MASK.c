
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct twl4030_madc_request {size_t method; int raw; int rbuf; int channels; scalar_t__ do_avg; } ;
struct twl4030_madc_conversion_method {int rbase; int ctrl; int avg; int sel; } ;
struct TYPE_7__ {int lock; TYPE_1__* requests; int dev; } ;
struct TYPE_6__ {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct twl4030_madc_conversion_method* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,size_t) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct twl4030_madc_request *VAR_7)
{
 const struct twl4030_madc_conversion_method *VAR_8;
 int VAR_9;

 if (!VAR_7 || !VAR_6)
  return -VAR_1;

 FUNC_1(&VAR_6->lock);
 if (VAR_7->method < VAR_2 || VAR_7->method > VAR_3) {
  VAR_9 = -VAR_1;
  goto out;
 }

 if (VAR_6->requests[VAR_7->method].active) {
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_8 = &VAR_5[VAR_7->method];

 VAR_9 = FUNC_6(VAR_4, VAR_7->channels, VAR_8->sel);
 if (VAR_9) {
  FUNC_0(VAR_6->dev,
   "unable to write sel register 0x%X\n", VAR_8->sel);
  goto out;
 }

 if (VAR_7->do_avg) {
  VAR_9 = FUNC_6(VAR_4, VAR_7->channels,
           VAR_8->avg);
  if (VAR_9) {
   FUNC_0(VAR_6->dev,
    "unable to write avg register 0x%X\n",
    VAR_8->avg);
   goto out;
  }
 }

 if (VAR_7->method == VAR_2) {
  VAR_9 = -VAR_1;
  goto out;
 }
 VAR_9 = FUNC_4(VAR_6, VAR_7->method);
 if (VAR_9 < 0)
  goto out;
 VAR_6->requests[VAR_7->method].active = 1;

 VAR_9 = FUNC_5(VAR_6, 5, VAR_8->ctrl);
 if (VAR_9) {
  VAR_6->requests[VAR_7->method].active = 0;
  goto out;
 }
 VAR_9 = FUNC_3(VAR_6, VAR_8->rbase,
      VAR_7->channels, VAR_7->rbuf, VAR_7->raw);
 VAR_6->requests[VAR_7->method].active = 0;

out:
 FUNC_2(&VAR_6->lock);

 return VAR_9;
}

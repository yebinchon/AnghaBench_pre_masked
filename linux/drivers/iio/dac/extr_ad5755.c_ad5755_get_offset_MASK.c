
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad5755_state {int dummy; } ;


 int FUNC_0 (struct ad5755_state*,struct iio_chan_spec const*,int*,int*) ;

__attribute__((used)) static inline int FUNC_1(struct ad5755_state *VAR_0,
 struct iio_chan_spec const *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3);
 return (VAR_2 * (1 << VAR_1->scan_type.realbits)) / (VAR_3 - VAR_2);
}
